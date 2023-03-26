# Triangle Mesh
This project can be used to process a triangular mesh described within input.off file. Once populated, the mesh can be queried for the following:
1. Edges adjacent to a Vertex
2. Triangles adjacent to a Vertex
3. Triangles adjacent to an Edge
4. Compute two connected component of any Triangle

## Classes - Purpose(s)
EdgeList - List of Edges<br />
Mesh - contains Triangular Mesh structure and related APIs<br />
Printer - Prints EdgeLists, TrianglesLists and Meshes<br />
Triangle - Triangles, Edges and other related APIs<br />
TriangleList - List of Triangles

## Source Files
main.cpp = Executable main

## Headers
Vertex.h = Defines a vertex (in this case, an integer)

## Misc
input.off = Sample input
