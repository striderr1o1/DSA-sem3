#ifndef ADJACENCYMATRIX_H
#define ADJACENCYMATRIX_H

#include <iostream>
using namespace std;

class Graph{
    private:
    bool** adjacencyMatrix; 
    int vertexCount;
    public:
    Graph(int vertexCount);
    void addEdge(int i, int j);
    void removeEdge(int i,int j);
    bool isEdge(int i,int j);
    void print();
    ~Graph();
};


#endif