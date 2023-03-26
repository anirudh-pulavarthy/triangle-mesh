//
//  EdgeList.hpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/25/23.
//

#ifndef EdgeList_hpp
#define EdgeList_hpp

#include <vector>
#include "Triangle.hpp"

typedef std::vector<Edge> EdgeArray;

class EdgeList {
private:
    EdgeArray arrList;
    
public:
    bool addEdge(Vertex v1, Vertex v2);
    EdgeArray::iterator begin() { return arrList.begin(); }
    EdgeArray::iterator end() { return arrList.end(); }
    Edge get(int index);
    int size() { return (int) arrList.size(); }
    
private:
    bool alreadyAdded(Edge t);
};

#endif /* EdgeList_hpp */