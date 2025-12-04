#include <iostream>
#include "Graph.h"
using namespace std;
int main(){
    Graph G(5);
    G.addEdge(3,5);
    G.addEdge(2,5);
    G.PrintGraph();
}