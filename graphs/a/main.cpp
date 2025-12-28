#include <iostream>
#include "Graph.h"
using namespace std;
int main(){
    Graph G(5);
    G.addEdge(0,2);
    G.addEdge(3,2);
    G.addEdge(3,4);
    G.addEdge(4,0);
    G.addEdge(2,1);
    G.addEdge(1,3);
    G.addEdge(4,1);
    G.addEdge(0,1);
    G.addEdge(3,4);
    G.PrintGraph();
}