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

int main(int argc, const char * argv[]) {
    Mesh m1;
    m1.populate("/Users/cdmstudent/Desktop/experiments/tm4/tm4/input.off");

    Printer::PrintMesh(cout, m1);
    return 1;
}