#ifndef LINKEDLIST_PRIORITYQUEUE
#define LINKEDLIST_PRIORITYQUEUE

#include <iostream>
using namespace std;
struct Node
{
    int data;
    int priority;
    Node* next;
};

class PriorityQueue{
    private:
    Node* head;
    public:
    PriorityQueue();
    void enqueue(int val, int priority);
    void dequeue();
    void traverse();

};
#endif