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
//       Graph(int V);
// \\ Create a new node of the list with value ‘d’
//  AdjListNode* newAdjListNode(int d); 
// \\ Create an edge from ‘src’ to ‘dest’
//  void addEdge(int src, int dest);
// \\ Print the vertices in the adjacency list of each vertex
//  void printGraph();
    Graph(int v);
    AdjListNode* newAdjListNode(int d);
    void addEdge(int src, int dest);
    void PrintGraph();
};
#endif // GRAPH_H