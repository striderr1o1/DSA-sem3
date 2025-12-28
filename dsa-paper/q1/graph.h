#ifndef GRAPH_H
#define GRAPH_h
#include <iostream>
using namespace std;

class Graph
{
private:
    bool** adjacencyMatrix;
    int vertexCount;

public:
    Graph(int v);

    void addEdge(int i, int j);
    void removeEdge(int i, int j);
    bool isEdge(int i, int j);
    void print();
    ~Graph();
    //printing for checking
};

#endif