//
//  mesh.hpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/21/23.
//

#include <vector>
#include "Triangle.hpp"

class Mesh {
private:
    std::vector<Triangle> data;
    
public:
    void populate(const char* fileName);
    bool findEdge(Edge e);
};
