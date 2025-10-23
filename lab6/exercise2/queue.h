#ifndef QUEUE_WITH_LINKEDLIST
#define QUEUE_WITH_LINKEDLIST
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

class Queue{
    private:
    Node* front;
    Node* rear;

    public:
    Queue();
    
    void enqueue(int value);
    bool Empty();
    void dequeue();
    void display();
    
};
#endif