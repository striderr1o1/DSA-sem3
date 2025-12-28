#include <iostream>
#include "graph.h"
using namespace std;
int main(){
    Graph G(5);//one times ahead because array starts from 0
    G.addEdge(1,2);
    G.addEdge(0,1);
    G.addEdge(3,4);
    G.addEdge(2,4);


    G.print();

    G.removeEdge(0,1);
    cout << endl;
    G.print();
}