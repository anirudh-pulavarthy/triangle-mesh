//
//  mesh.cpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/21/23.
//

#include <iostream>
#include <fstream>
#include "mesh.hpp"

void Mesh::populate(const char *fileName) {
    std::ifstream inputFile;
    inputFile.open(fileName);

    if ( inputFile.is_open() ) {
        int v[3];
        while ( inputFile >> v[0] >> v[1] >> v[2] )
            data.addTriangle(v);
         
        inputFile.close();
    }
    else
        std::cout << "Error opening off file." << std::endl;
}

void Mesh::findAdjacentEdges(Vertex v, EdgeList& list) {
    for (Triangle t : data)
    {
        if (t.contains(v))
        {
            Vertex others[2] = {Vertex(0), Vertex(0)};
            t.findEdgesContaining(v, others);
            list.addEdge(v, others[0]);
            list.addEdge(v, others[1]);
        }
    }
}

void Mesh::findAdjacentTriangles(Vertex v, TriangleList& list) {
    for ( Triangle t : data )
        if ( t.contains(v) ) list.addTriangle(t);
}

void Mesh::findAdjacentTriangles(Edge e, TriangleList &list) {
    for ( Triangle t : data )
        if ( t.hasEdge(e) ) list.addTriangle(t);
}

bool Mesh::contains(const Triangle& tRef) {
    for ( auto t : data )
        if ( t == tRef ) return true;
    return false;
}

void Mesh::computeTwoConnectedComponent(const Triangle& tRef, TriangleList& list) {
    
    // visit neighbours of tRef, fill them in list and update visited
    visitNeighbors(tRef, list);
    
    // For every adjacent triangle, call the utility function
    for ( Triangle& t : list )
        tccUtil(t, list);
    
    // unset the value of visited
    for ( Triangle& t : data ) t.visited = false;
}

void Mesh::tccUtil(Triangle& tRef, TriangleList &list) {
    //std::cout << "tccUtil called for " << tRef << std::endl;
    
    if ( data.getVisited(tRef) ) return;
    
    visitNeighbors(tRef, list);
    
    for ( Triangle& t : list )
        tccUtil(t, list);
}

void Mesh::visitNeighbors(const Triangle& tRef, TriangleList& list) {
    Edge e1(tRef.v1, tRef.v2),
        e2(tRef.v1, tRef.v3),
        e3(tRef.v2, tRef.v3);
    
    findAdjacentTriangles(e1, list);
    findAdjacentTriangles(e2, list);
    findAdjacentTriangles(e3, list);
    
    data.setVisited(tRef, true);
}