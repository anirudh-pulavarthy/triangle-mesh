//
//  Printer.cpp
//  tm4
//
//  Created by anirudh-pulavarthy on 3/25/23.
//

#include "Printer.hpp"

void Printer::PrintMesh(std::ostream& os, Mesh& m) {
    TriangleList list = m.getData();
    PrintList(os, list);
}

void Printer::PrintList(std::ostream& os, TriangleList& list) {
    int i = 1;
    for (const Triangle& t : list)
        os << i++ << ": " << t << std::endl;
}

void Printer::PrintList(std::ostream& os, EdgeList& list) {
    int i = 1;
    for (auto e : list)
        os << i++ << ": (" << e.first.id
        << ", " << e.second.id << ")" << std::endl;
}