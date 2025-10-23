#include "multistruct.h"

void MultiStruct::insert_stack(int v){
    if(head == nullptr || tail == nullptr){
        node* newnode = new node;
        newnode->data = v;
        newnode->next = nullptr;
        newnode->prev = newnode;
        head = tail = newnode;
        return;
    }
    node* newnode = new node;
    newnode->data = v;
    newnode->next = nullptr;
    newnode->prev = tail;
    tail->next = newnode;
    tail = tail->next;
}

void MultiStruct::display_stack(){
    if(head != nullptr){
        node* temp = head;
        while (temp!=nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        
    }
    else
    cout << "empty" << endl;
}

void MultiStruct::stack_pop(){
    if(tail == nullptr){
        cout << "Empty" << endl;
        return;
    }
    if(tail == head){
        tail->next = nullptr;
        tail->data = 0;
        tail = head = nullptr;
        return;
    }
    if(tail!=nullptr){
        node* temp = tail;
        tail = tail->prev;
        tail->next = nullptr;
        temp->data = 0;
        temp->prev = nullptr;
        delete temp;
    }
    
}