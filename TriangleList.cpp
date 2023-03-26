//
//  TriangleList.cpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/25/23.
//

#include <iostream>
#include "TraingleList.hpp"

bool TriangleList::alreadyAdded(Triangle t) {
    if ( arrList.size() <= 1 )
        return false;
    
    auto itr = std::find(arrList.begin(), arrList.end(), t);
    
    if ( itr == arrList.end() )
        return false;
    else if ( *itr == Triangle(0, 0, 0) )
        return false;
    
    return true;
}

bool TriangleList::addTriangle(int vertices[3]) {
    
    if (vertices[0] == vertices[1]
        || vertices[0] == vertices[2]
        || vertices[1] == vertices[2])
            return false;
    
    Triangle t(vertices[0], vertices[1], vertices[2]);
    if (alreadyAdded(t))
        return false;
    
    arrList.push_back(t);
    return true;
}

Triangle TriangleList::get(int index) {
    if (index < 0 || index >= arrList.size())
    {
        std::cout << "Triangle index out of bounds" << std::endl;
        return Triangle(0, 0, 0);
    }
    
    return arrList.at(index);
}

bool TriangleList::addTriangle(Triangle t) {
    if (alreadyAdded(t))
        return false;
    
    arrList.push_back(t);
    return true;
}