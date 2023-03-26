//
//  main.cpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/20/23.
//

#include "mesh.hpp"
#include "Printer.hpp"
#include <iostream>
using namespace std;

void AddBreak() {
    cout << "------------------------------------" << endl;
}

int main(int argc, const char * argv[]) {
    Mesh m1;
    m1.populate("/Users/cdmstudent/Desktop/experiments/tm4/tm4/input.off");
    
    AddBreak();
    cout << "Mesh contains -->" << endl;
    Printer::PrintMesh(cout, m1);
    AddBreak();
    
    cout << endl;
    
    Vertex v1(4);
    EdgeList arrEdges;
    m1.findAdjacentEdges(v1, arrEdges);
    cout << "Vertex 4 is adjacent to edges-->" << endl;
    Printer::PrintList(cout, arrEdges);
    AddBreak();
    
    TriangleList arrList1;
    m1.findAdjacentTriangles(v1, arrList1);
    cout << "Vertex 4 is adjacent to triangles-->" << endl;
    Printer::PrintList(cout, arrList1);
    AddBreak();
    
    TriangleList arrList2;
    Edge e(4, 2);
    m1.findAdjacentTriangles(e, arrList2);
    cout << "Edge (4, 2) is adjacent to triangles-->" << endl;
    Printer::PrintList(cout, arrList2);
    AddBreak();
    
    TriangleList arrList3;
    Triangle t(1, 3, 2);
    m1.computeTwoConnectedComponent(t, arrList3);
    cout << "Triangle (1, 3, 2) is adjacent to triangles-->" << endl;
    Printer::PrintList(cout, arrList3);
    AddBreak();
    return 0;
}