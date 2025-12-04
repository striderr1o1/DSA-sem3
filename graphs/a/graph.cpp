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
    
    for(int i = 0; i < V; i++){
        if(arr[i].head == nullptr){
            arr[i].head = newnode;
            cout << "Node created" << endl;
            return newnode;
        }
        if(arr[i].head->dest == d){
            cout << "Node exists" << endl;
            return newnode;
        }
        
    }
    cout << "No space left in array" << endl;
    return NULL;
    
}
void Graph::addEdge(int src, int dest){
    //src node
    AdjListNode* srcNode = newAdjListNode(src);
    //dest node
    AdjListNode* destNode = newAdjListNode(dest);
    cout << "Caught nodes" << endl;
    if(srcNode == nullptr || destNode == nullptr){
        cout << "cannot introduce new node. No more space left" << endl;
        return;
    }
    //for adding after source node
    AdjListNode* temp1, *temp2;
    for(int i = 0; i < V; i++){
        if(arr[i].head == srcNode){
            temp1 = arr[i].head;
        }
        if(arr[i].head == destNode){
            temp2 = arr[i].head;
        }
    }
    while(temp1->next!=nullptr){
        temp1 = temp1->next;
    }
    temp1->next = destNode;

    while(temp2->next!=nullptr){
        temp2 = temp2->next;
    }
    temp2->next = srcNode;
    
   
    return;
}
void Graph::PrintGraph(){
    AdjListNode* temp;
    for(int i = 0; i < V; i++){
        temp = arr[i].head;
        if(temp == nullptr){
            cout << "Doesnt exist" << endl;
            return;
        }
        while(temp!=nullptr){
            cout << temp->dest << "->";
            temp = temp->next;
        }
        cout << endl;
    }
}
//new node