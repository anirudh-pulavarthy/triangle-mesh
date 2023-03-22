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

Triangle::Triangle(int i1, int i2, int i3) : v1(i1), v2(i2), v3(i3)
{
    //assert(v1 != v2);
    //assert(v2 != v3);
    //assert(v3 != v1);

    if ( (v1.isEqual(v2))
        || (v2.isEqual(v3))
        || (v3.isEqual(v1)) )
    {
        std::cout << "Invalid vertices: (" << v1.id << ", "
            << v2.id << ", " << v3.id << ")\n";
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
    stream << "Triangle is " << obj.v1.id << obj.v2.id << obj.v3.id << "\n";
    return stream;
}