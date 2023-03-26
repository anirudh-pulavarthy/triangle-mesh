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

class TriangleList {
private:
    std::vector<Triangle> arrList;
    
public:
    bool addTriangle(int vertices[3]);
    bool addTriangle(Triangle t);
    std::vector<Triangle>::iterator begin() { return arrList.begin(); }
    std::vector<Triangle>::iterator end() { return arrList.end(); }
    Triangle get(int index);
    int size() { return (int) arrList.size(); }
private:
    bool alreadyAdded(Triangle t);
};

#endif /* TriangleList_hpp */