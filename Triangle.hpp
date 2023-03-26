//
//  Triangle.hpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/20/23.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <ostream>
#include "Vertex.hpp"

typedef std::pair<Vertex, Vertex> Edge;

class Triangle {
    public:
    bool visited;   // only used for computing connected components
    Vertex v1;
    Vertex v2;
    Vertex v3;

    public:
    Triangle(int i1, int i2, int i3);
    Triangle(int v[3]);
    bool contains(Vertex v);
    void findEdgesContaining(Vertex v, Vertex* others);
    bool hasEdge(Edge e);

    public:
    friend std::ostream& operator << (std::ostream& stream, const Triangle& obj);

    // Overloading equality operator
    bool operator ==(const Triangle& right);
    
private:
    void init(int a1, int a2, int a3);
};

#endif /* Triangle_hpp */