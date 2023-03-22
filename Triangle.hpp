//
//  Triangle.hpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/20/23.
//

#include <ostream>
#include "Vertex.hpp"

typedef std::pair<Vertex, Vertex> Edge;

class Triangle {
    public:
    Vertex v1;
    Vertex v2;
    Vertex v3;

    public:
    Triangle(int i1, int i2, int i3);
    bool hasEdge(Edge e);

    public:
    friend std::ostream& operator << (std::ostream& stream, const Triangle& obj);

    // Overloading equality operator
    bool operator ==(const Triangle& right);
};
