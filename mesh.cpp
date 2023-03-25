//
//  mesh.cpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/21/23.
//

// Assuming off file does not have any duplicate triangles

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
    else {
        std::cout << "Error opening off file." << std::endl;
    }
}
