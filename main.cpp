//
//  main.cpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/20/23.
//

#include <iostream>
#include <vector>
#include "mesh.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    //vector<Triangle> arrAngles;
    
    //cout << "Hello, World!\n";
    //cout << arr.at(0).id << "\n";
    //cout << arr.at(1).id << "\n";
    
    //cout << "There's a triangle too.. \n" << t1;
    
    //vector<Triangle> mesh;
    //std::
    //parseFile("/input.off", mesh);
    //cout << mesh.at(0);

    Mesh m1;
    //m1.populate("/usr/");
    //m1.populate("/Users/cdmstudent/Desktop/experiments/tm4/tm4/data.txt");
    
    Triangle t1(1, 2, 54);
    cout << t1;
    
    bool b = t1.hasEdge(Edge(54, 1));
    cout << "Triangle has/not edge " << b << "\n";
    return 1;
}
