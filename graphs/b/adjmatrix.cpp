#include "adjmatrix.h"

Graph::Graph(int v){
    vertexCount = v;
     adjacencyMatrix = new bool*[v];
     for(int i = 0; i < v; i++){
        adjacencyMatrix[i] = new bool[v];
     }
     for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            adjacencyMatrix[i][j] = false;
        }
     }
}

void Graph::addEdge(int i, int j){
    adjacencyMatrix[i-1][j-1] = true;
    adjacencyMatrix[j-1][i-1] = true;
}
void Graph::removeEdge(int i,int j){
    adjacencyMatrix[i-1][j-1] = false;
    adjacencyMatrix[j-1][i-1] = false;
}
bool Graph::isEdge(int i,int j){
    if(adjacencyMatrix[i][j] && adjacencyMatrix[j][i]){
        return true;
    }
    return false;
}
Graph::~Graph(){
    *adjacencyMatrix = nullptr;
    adjacencyMatrix = nullptr;
}
// void Graph::print(){
//     for (int i = 0; i < vertexCount; i++) {
//         for (int j = 0; j < vertexCount; j++) {
//             std::cout << adjacencyMatrix[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }
// }
