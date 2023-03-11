#include <fstream>
#include <vector>
#include "xTriangle.h"

void parseFile(const char* filePath, std::vector<Triangle>& mesh) 
{
    std::ifstream inputFile(filePath);

    int i1, i2, i3;
    while (inputFile >> i1 >> i2 >> i3)
    {
        if (i1 == i2 || i2 == i3 || i1 == i3)
            continue;

        mesh.push_back(Triangle(i1, i2, i3));
    }
}