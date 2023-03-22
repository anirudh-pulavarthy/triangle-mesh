//
//  Vertex.c
//  tm4
//
//  Created by anirudh-pulavarthy on 3/20/23.
//

struct Vertex {
    int id; // an integer identifying the vertex

    // Vertex constructor
    Vertex(int i) { id = i; }

    bool isEqual(const Vertex& right)
    {
        return id == right.id;
    }

    // Overloading inequality operator
    bool isNotEqual(const Vertex& right)
    {
        return id != right.id;
    }

    // Overloading assignment operator
    Vertex& operator =(const Vertex& right)
    {
        id = right.id;
        return *this;
    }

    // Overloading < operator
    bool operator < (const Vertex& right)
    {
        return id < right.id;
    }

    // Overloading > operator
    bool isGreater (const Vertex& right)
    {
        return id > right.id;
    }
};
