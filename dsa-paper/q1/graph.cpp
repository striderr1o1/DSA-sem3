#include "graph.h"

Graph::Graph(int v){
    vertexCount = v;
    adjacencyMatrix = new bool*[vertexCount];
    for(int i = 0; i < vertexCount; i++){
        adjacencyMatrix[i] = new bool[vertexCount];
    }

    for(int i = 0; i < vertexCount; i++){
        for(int j = 0; j < vertexCount; j++){
            adjacencyMatrix[i][j] = false;
        }
    }
}
void Graph::addEdge(int i, int j){
    adjacencyMatrix[i][j] = true;
    adjacencyMatrix[j][i] = true;
}
void Graph::removeEdge(int i, int j){
    adjacencyMatrix[i][j] = false;
    adjacencyMatrix[j][i] = false;
}
bool Graph::isEdge(int i, int j){
    if(adjacencyMatrix[i][j]==true && adjacencyMatrix[j][i] == true){
        return true;
    }
    return false;
}
Graph::~Graph(){
    delete adjacencyMatrix;
}

void Graph::print(){
    for(int i = 0; i < vertexCount; i++){
        for(int j = 0; j < vertexCount; j++){
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

