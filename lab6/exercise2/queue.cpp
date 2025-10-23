#include "queue.h"

Queue::Queue(){
    front = nullptr;
    rear = nullptr;
}

void Queue::enqueue(int value){

    if(rear == nullptr || front == nullptr){
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = nullptr;
        rear = newnode;
        front = newnode;
        return;
    }
    
    Node* newnode = new Node;
    newnode->data = value;
    newnode->next = nullptr;
    rear->next = newnode;
    rear = rear->next;

    
    
}
bool Queue::Empty(){
    if (front == nullptr){
        return true;
    }
    else{
        return false;
    }
}
void Queue::dequeue(){
    if(front == rear){
        front->next = nullptr;
        front = nullptr;
    }
    //if not empty
    if(!Empty()){
        Node* temp = front;
        front = front->next;
        temp->next = nullptr;
        delete temp;
    }
    else{
        cout << "empty" << endl; 
    }
}
void Queue::display(){
    
    Node* temp = front;
    
    while(temp!=nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }
}