#include <iostream>
#include "adjmatrix.h"
using namespace std;
int main(){
    Graph g(5);
    g.addEdge(1,2);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.print();
}