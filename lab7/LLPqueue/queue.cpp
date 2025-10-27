#include "queue.h"

PriorityQueue::PriorityQueue(){
    head = nullptr;
}
void PriorityQueue::enqueue(int v, int p){
    Node* newnode = new Node;
    newnode->data = v;
    newnode->priority = p;
    newnode->next = nullptr;
    if(head == nullptr){
        head = newnode;
        return;
    }
    Node* temp = head;
    while (temp->next!=nullptr)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    

}
void PriorityQueue::dequeue(){
    if(head == nullptr){
        return;
    }
    int min = head->priority;
    if(head->next == nullptr){
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp!=nullptr)
    {
        if(temp->priority<min){
            min = temp->priority;
        }
        temp = temp->next;
    }
    Node* newTemp = head;
    Node* prev = head;
    while (newTemp!=nullptr)
    {
        if(newTemp->priority == min){
            break;
        }
        prev = newTemp;
        newTemp = newTemp->next;
    }
    if(newTemp == head){
        head = head->next;
    }
    Node* temp3 = newTemp;
    // newTemp = newTemp->next;
    prev->next = newTemp->next;
    delete temp3;
}
void PriorityQueue::traverse(){
    if(head==nullptr){
        return;
    }
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " " << temp->priority << endl;
        temp = temp->next;
    }
}