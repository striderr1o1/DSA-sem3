#include "linkedlist.h"

LinkedList::LinkedList(){
    head = nullptr;
}
void LinkedList::InsertNode(node x){
    node* temp = head;
    
    
    if(temp == NULL){
        node* newnode = new node;
        newnode->data = x.data;
        newnode->next = &x;
        head = newnode;
        
        return;
    }
   
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = &x;
    cout << temp->next->data;
}
void LinkedList::Display(){
    node* temp = head;
    if (temp->next == nullptr){
        cout << "Null";
    }
    while(temp->next != NULL){
        cout << "[" << temp->data << ", " << temp->next << "]" << " ---> ";
        temp = temp->next;
    }
}