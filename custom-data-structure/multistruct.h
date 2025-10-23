#ifndef MULTISTRUCT_H
#define MULTISTRUCT_H
#include <iostream>
using namespace std;
struct node{
    int data;
    node* prev;
    node* next;
};
class MultiStruct{
    private:
    node* head;
    node* tail;
    int mode;//0: stack, 1: queue, 2: priority
    void insert_stack(int v);
    void display_stack();
    void stack_pop();
    
    void insert_queue(int v);
    void queue_pop();
    void display_queue();
    // void insert_Pqueue(int v, int priority);
    public:
    MultiStruct();
    void insert(int v);
    void display();
    void pop();
    void SetMode(int m);
};
#endif