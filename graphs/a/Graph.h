#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
using namespace std;

struct AdjListNode 
{
    int dest;
    AdjListNode* next;
};

struct AdjList 
{
    AdjListNode *head;
};
class Graph{
    private:
    int V;	 
    AdjList* arr; 
    public:
    Graph(int v);
    AdjListNode* newAdjListNode(int d);
    void addEdge(int src, int dest);
    void PrintGraph();
};
#endif // GRAPH_H