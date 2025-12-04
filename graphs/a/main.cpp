#include <iostream>
#include "Graph.h"
using namespace std;
int main(){
    Graph G(5);
    G.addEdge(0,2);
    G.addEdge(1,3);
    G.addEdge(2,2);
    G.addEdge(3,2);
    G.addEdge(4,4);
    G.PrintGraph();
}