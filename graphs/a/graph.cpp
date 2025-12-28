#include "Graph.h"

Graph::Graph(int v){
    this->V = v;
    arr = new AdjList[V];
    for(int i = 0; i < V; i++){
        arr[i].head = nullptr;
    }
}

AdjListNode* Graph::newAdjListNode(int d){
    
    AdjListNode* newnode = new AdjListNode;
    newnode->dest = d;
    newnode->next = nullptr;
    return newnode;
    
}
void Graph::addEdge(int src, int dest){
    //src node
    if(arr[src].head == nullptr)
    arr[src].head = newAdjListNode(src);

    if(arr[dest].head == nullptr)
    arr[dest].head = newAdjListNode(dest);

    //for adding dest node in the list of src node
    AdjListNode* temp = arr[src].head;
    bool c1 = true;
    while(temp->next != nullptr){
        temp = temp->next;
        if(temp->dest == dest){
            c1 = false;
        }
    }
    if(c1 == true)
    temp->next = newAdjListNode(dest);

    //for adding src node in the list of dest node
    bool c2 = true;
    temp = arr[dest].head;
    while(temp->next != nullptr){
        temp = temp->next;
        if(temp->dest == src){
            c2 = false;
        }
    }
    if(c2 == true)
    temp->next = newAdjListNode(src);

}
void Graph::PrintGraph(){
    AdjListNode* temp;
    for(int i = 0; i < V; i++){
        temp = arr[i].head;
        if(temp == nullptr){
            cout << "Doesnt exist" << endl;
            
        }
        while(temp!=nullptr){
            cout << temp->dest << "->";
            temp = temp->next;
        }
        cout << "null";
        cout << endl;
        cout << endl;
    }
}
//new node