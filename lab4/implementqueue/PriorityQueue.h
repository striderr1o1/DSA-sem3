#ifndef PRIORITY_QUEUE
#define PRIORITY_QUEUE

#include <iostream>
#include "node.cpp"
// #include "main.cpp"
using namespace std;
class PriorityQueue{
    private:
    int front;
    int rear;
    int size = 5;
    node array[5];
    int count;
    public:
    PriorityQueue();
    bool CheckFull();
    bool CheckEmpty();
    void enqueue(node x);
    node dequeue();
    void display();

    

};
#endif