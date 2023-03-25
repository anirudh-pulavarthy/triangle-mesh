//
//  mesh.hpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/21/23.
//

#ifndef mesh_hpp
#define mesh_hpp

#include <vector>
#include "TraingleList.hpp"

class Mesh {
private:
    TriangleList data;
    
public:
    void populate(const char* fileName);
    const TriangleList& getData() { return data; }
};

#endif /* mesh_hpp */
