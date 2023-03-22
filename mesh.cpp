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
    std::ifstream inputFile(fileName);
    inputFile.open(fileName);

    if (!inputFile.is_open())
        return;
    
    char* charLine;
    std::string line;
     int i1, i2, i3, i4, i5;
    while ( !inputFile.eof() )
    {
        std::getline(inputFile, line);
        //std::fgets(charLine, 500, inputFile);
        //std::scanf(charLine, "%d %d %d", &i1, &i2, &i3);
        //inputFile.getline(line, LINE_MAX);
        //inputFile >> i1 >> i2 >> i3 >> i4 >> i5;
        //if (i1 == i2 || i2 == i3 || i1 == i3)
        //    continue;

        data.push_back(Triangle(i1, i2, i3));
    }
     
    if (inputFile.is_open())
    {
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    }
    
}
