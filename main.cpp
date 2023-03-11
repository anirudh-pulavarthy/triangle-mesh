#include <iostream>
#include <vector>
#include <fstream>

#include "xOffParser.h"
using namespace std;

int main()
{
    vector<Triangle> mesh;
    parseFile("input.off", mesh);
    cout << mesh.at(0);

    Triangle t1(1, 2, 54);
    cout << t1;

    //cout << "Hello";
    return 0;
}