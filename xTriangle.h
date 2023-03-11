#include "xVertex.h"
#include <ostream>

class Triangle {
    public:
    Vertex v1;
    Vertex v2;
    Vertex v3;

    public:
    Triangle(int i1, int i2, int i3);
    //int GetEdges();

    public:
    friend std::ostream& operator << (std::ostream& stream, const Triangle& obj);

    // Overloading equality operator
    bool operator ==(const Triangle& right);
};