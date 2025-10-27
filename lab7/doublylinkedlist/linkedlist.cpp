#include "linkedlist.h"

List::List(){
    head = nullptr;
}
void List::insert_end(int val){
    Node* newnode = new Node;
    newnode->next = nullptr;
    newnode->data = val;
    if(head == nullptr){
        head = newnode;
        newnode->prev = newnode;
        return;    
    }
    Node* temp = head;
    while (temp->next!= nullptr)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    
}

bool List::IsEmptyList(){
    if(head == nullptr){
        return true;
    }
    return false;
}
 
void List::insert_begin(int v){
    if(head == nullptr){
        Node* newnode = new Node;
        newnode->next = nullptr;
        newnode->data = v;
        head = newnode;
        newnode->prev = newnode;
        return;    
    }
    Node* newnode = new Node;
    newnode->data = v;
    head->prev = newnode;
    newnode->next = head;
    head = head->prev;
    

}

void List::traverse(){
    Node* temp = head;
    if(head == nullptr){
        return;
    }
    while(temp!=nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }
    
}

void List::insertafter(int oldv, int newV){
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->data == oldv){
            break;
        }
        temp = temp->next;
    }
    Node* newnode = new Node;
    newnode->data = newV;
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;

}

void List::deleteNode(int v){
    Node* temp = head;
    if(temp->data == v){
        head = head->next;
        delete temp;
        return;
    }
    while(temp!=nullptr){
        if(temp->data == v){
            break;
        }
        temp = temp->next;
    }
    if(temp->next == nullptr){
        temp->prev->next = temp->next;
        delete temp;
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

List::~List(){
    head = nullptr;
    delete head;
}