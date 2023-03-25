//
//  Triangle.cpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/20/23.
//

#include <iostream>
#include "Triangle.hpp"

#define isEdgeEqual(e1, e2) \
        (e1.first.isEqual(e2.first)) \
        && (e1.second.isEqual(e2.second))

Triangle::Triangle(int ver[3]) : v1(0), v2(0), v3(0) {
    init(ver[0], ver[1], ver[2]);
}

Triangle::Triangle(int i1, int i2, int i3) : v1(0), v2(0), v3(0)
{
    init(i1, i2, i3);
}

void Triangle::init(int i1, int i2, int i3) {
    
    if ( (i1 == i2)
        || (i2 == i3)
        || (i3 == i1) )
    {
        if ( i1 != 0 )
            std::cout << "Invalid vertices: (" << i1 << ", "
                << i2 << ", " << i3 << ")\n";
        return;
    }

    if ( i1 < i2 && i1 < i3 )
    {
        v1 = i1;
        v2 = (i2 < i3) ? i2 : i3;
        v3 = (i2 < i3) ? i3 : i2;
    }
    else if ( i2 < i1 && i2 < i3 )
    {
        v1 = i2;
        v2 = (i1 < i3) ? i1 : i3;
        v3 = (i1 < i3) ? i3 : i1;
    }
    else
    {
        v1 = i3;
        v2 = (i1 < i2) ? i1 : i2;
        v3 = (i1 < i2) ? i2 : i1;
    }
}

bool Triangle::hasEdge(Edge e) {
    if (e.first.id > e.second.id)
        e = Edge(e.second, e.first);
    
    return (isEdgeEqual(e, Edge(v1, v2)))
        || (isEdgeEqual(e, Edge(v1, v3)))
        || (isEdgeEqual(e, Edge(v2, v3)));
}

bool Triangle::operator ==(const Triangle& right)
{
    return (v1.isEqual(right.v1))
        && (v2.isEqual(right.v2))
        && (v3.isEqual(right.v3));
}

std::ostream& operator <<(std::ostream& stream, const Triangle& obj)
{
    stream << "(" << obj.v1.id << ", "
        << obj.v2.id << ", "
        << obj.v3.id << ")";
    
    return stream;
}