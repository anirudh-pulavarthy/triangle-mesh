//
//  Printer.hpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/25/23.
//

#ifndef Printer_hpp
#define Printer_hpp

#include <ostream>
#include "mesh.hpp"

class Printer {
public:
    static void PrintList(std::ostream& os, EdgeList& list);
    static void PrintList(std::ostream& os, TriangleList& list);
    static void PrintMesh(std::ostream& os, Mesh& m);
};

#endif /* Printer_hpp */