//
//  EdgeList.cpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/25/23.
//

#include <iostream>
#include "EdgeList.hpp"

bool EdgeList::alreadyAdded(Edge e) {
    if ( arrList.size() <= 1 )
        return false;
    
    for ( auto edge : arrList ) {
        if ( edge.first.isEqual(e.first)
            && edge.second.isEqual(e.second) )
            return true;
    }
    
    return false;
}

bool EdgeList::addEdge(Vertex v1, Vertex v2) {
    if ( v1.isEqual(v2) )
        return false;
    
    if (v1.isGreater(v2))
        v1.swap(v2);
    
    Edge e(v1, v2);
    if (alreadyAdded(e))
        return false;
    
    arrList.push_back(e);
    return true;
}

Edge EdgeList::get(int index) {
    if (index < 0 || index >= arrList.size())
    {
        std::cout << "Edge index out of bounds" << std::endl;
        
        Vertex v(0);
        return Edge(v, v);
    }
    
    return arrList.at(index);
}