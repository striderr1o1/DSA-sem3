#include "linkedlist.h"

List::List(){
    head = nullptr;
}
List::~List(){
    delete head;
}

void List::push(int value){
    Node* temp = head;
    Node* newnode = new Node;
    newnode->data = value;
    if(head == nullptr){
        newnode->next = nullptr;
        head = newnode;
        return;
    }
    newnode->next = nullptr;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = newnode;
}

void List::pop(){
    
    if(head == nullptr){
        cout << "Empty" << endl;
        return;
    }
    Node* temp = head;
    Node* prev;

    while(temp->next!=nullptr){
        prev = temp;
        temp = temp->next;
    }
    if(temp == head){
        
        head = nullptr;
        return;
    }
    prev = head;
    prev->next = nullptr;
    delete temp;
}
void List::showHead(){
    cout << head->data << endl;
}

void List::traverse(){
    Node* temp = head;
    if(head == nullptr){
        // cout << "Emptyy" << endl;
        return;
    }
    while(temp->next!= nullptr){
        cout << temp->data << endl;
        temp = temp->next;
        if(temp->next == nullptr){
            cout << temp->data << endl;
        }
    }
    if(head->next == nullptr){
        cout << head->data << endl;
        return;
    }
}