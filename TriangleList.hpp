//
//  TriangleList.hpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/25/23.
//

#ifndef TriangleList_hpp
#define TriangleList_hpp

#include <vector>
#include "Triangle.hpp"

typedef std::vector<Triangle> TriangleArray;

class TriangleList {
private:
    TriangleArray arrList;
    
public:
    bool addTriangle(int vertices[3]);
    bool addTriangle(Triangle t);
    TriangleArray::iterator begin() { return arrList.begin(); }
    TriangleArray::iterator end() { return arrList.end(); }
    Triangle get(int index);
    bool getVisited(const Triangle& t);
    void setVisited(const Triangle& t, bool val);
    int size() { return (int) arrList.size(); }
    
private:
    bool alreadyAdded(Triangle t);
};

#endif /* TriangleList_hpp */