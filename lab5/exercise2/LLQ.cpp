#include "LLQ.h"

LLQueue::LLQueue(){
    front = nullptr;
    rear = nullptr;
    
}
void LLQueue::enqueue(int value){

    if(front == nullptr){
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = nullptr;
        front = newnode;
        rear = newnode;
        return;
    }
    Node* newnode = new Node;
    newnode->data = value;
    newnode->next = nullptr;
    rear->next = newnode;
    rear = newnode;
}
void LLQueue::dequeue(){
    
    front = front->next;
}
void LLQueue::display(){
    Node* temp = front;
    while(temp != nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }
}
 