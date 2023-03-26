//
//  mesh.hpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/21/23.
//

#ifndef mesh_hpp
#define mesh_hpp

#include <vector>
#include "EdgeList.hpp"
#include "TraingleList.hpp"

class Mesh {
private:
    TriangleList data;
    
private:
    //void tccUtil(Edge e, TriangleList& list);
    void tccUtil(Triangle t, TriangleList& list);
    
public:
    void computeTwoConnectedComponent(const Triangle& tRef, TriangleList& list);
    void findAdjacentEdges(Vertex v, EdgeList& list);
    void findAdjacentTriangles(Edge e, TriangleList& list);
    void findAdjacentTriangles(Vertex v, TriangleList& list);
    
    bool contains(const Triangle& tRef);
    void populate(const char* fileName);
    const TriangleList& getData() { return data; }
};

#endif /* mesh_hpp */