struct Vertex {
    int id; // an integer identifying the vertex

    // Default constructor
    Vertex() { id = 0; }

    // Vertex constructor
    Vertex(int i) { id = i; }

    // Overloading equality operator
    bool operator ==(const Vertex& right)
    {
        return id == right.id;
    }

    // Overloading inequality operator
    bool operator !=(const Vertex& right)
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
    bool operator <(const Vertex& right)
    {
        return id < right.id;
    }

    // Overloading > operator
    bool operator >(const Vertex& right)
    {
        return id > right.id;
    }
};