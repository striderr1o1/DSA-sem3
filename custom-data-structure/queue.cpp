#include "multistruct.h"



void MultiStruct::insert_queue(int v){
    if(head == nullptr || tail == nullptr){
        node* newnode = new node;
        newnode->next = nullptr;
        newnode->prev = head;
        newnode->data = v;
        head = tail = newnode;
        return;
    }
    node* newnode = new node;
    newnode->data = v;
    newnode->prev = tail;
    newnode->next = nullptr;
    tail->next= newnode;
    tail = tail->next;
}

void MultiStruct::queue_pop(){
    if(head == nullptr){
        cout << "Empty" << endl;
        return;
    }
    if(head->next== nullptr){
        head->data = 0;
        head->prev = nullptr;
        head = nullptr;
        return;
    }
    node* temp = head;
    head = head->next;
    head->prev = head;
    temp->next = nullptr;
    temp->prev = nullptr;
    temp->data = 0;
    delete temp;
}
void MultiStruct::display_queue(){
    if(head != nullptr){
        node* temp = head;
        while (temp!=nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        
    }
    else{
        cout << "EMPTY" << endl;
    }
}