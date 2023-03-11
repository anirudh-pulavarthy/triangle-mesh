#include <cassert>
#include <ostream>  
#include "xTriangle.h"

Triangle::Triangle(int i1, int i2, int i3)
{
    //assert(v1 != v2);
    //assert(v2 != v3);
    //assert(v3 != v1);

    if ( (v1 == v2) || (v2 == v3) || (v3 == v1) )
        return;

    if ( i1 < i2 && i1 < i3 )
    {
        v1 = i1;
        v2 = (i2 < i3) ? i2 : i3;
        v3 = (i2 < i3) ? i3 : i2;
    }
    else if ( i2 < i1 && i2 < i3)
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

bool Triangle::operator ==(const Triangle& right)
{
    return (v1 == right.v1)
        && (v2 == right.v2)
        && (v3 == right.v3);
}

std::ostream& operator <<(std::ostream& stream, const Triangle& obj)
{
    stream << obj.v1.id << obj.v2.id << obj.v3.id << "\n";
    return stream;
}