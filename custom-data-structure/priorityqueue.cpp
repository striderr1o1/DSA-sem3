#include "multistruct.h"

void MultiStruct::insert_priorityQ(int v, int priority){
    if(head == nullptr){
        node* newnode = new node;
        newnode->next = nullptr;
        newnode->priority = priority;
        newnode->data = v;
        head= newnode;
        tail = newnode;
        newnode->prev = head;
        return;
    }
    node* newnode = new node;
    newnode->data = v;
    newnode->priority = priority;
    newnode->next = nullptr;
    newnode->prev = tail;
    tail->next = newnode;
    tail=tail->next;

    
}

void MultiStruct::display_pqueue(){
    if(head != nullptr){
        node* temp = head;
        while (temp!=nullptr)
        {
            cout << temp->data << " " << temp->priority << endl;
            temp = temp->next;
        }
        
    }
    else{
        cout << "EMPTY" << endl;
    }
}

void MultiStruct::pqueue_pop(){
    if(head == nullptr){
        cout << "empty" << endl;
        return;
    }
    if(head == tail){
        head = nullptr;
        return;
    }
    node* temp = head;
    
    node* smallest = head;
    int min = head->priority;
    while (temp!=nullptr)
    {
        if(temp->priority < min){
            min = temp->priority;
            smallest = temp;
        }
        temp = temp->next;
    }
    node* temp2 = nullptr;
    if(smallest == tail){
        tail->prev->next = nullptr;
        temp2 = tail;
        tail = tail->prev;
        delete temp2;
        return;
    }
    smallest->prev->next = smallest->next;
    smallest->next->prev = smallest->prev;
    temp2 = smallest;
    delete temp2;

}