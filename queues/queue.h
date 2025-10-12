#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;


class CircularQueue
{
private:
    int Q[5];
    int front;
    int rear;
    int count;
public:
    CircularQueue();
    void enqueue(int n);
    void dequeue();
    int arraysize();
    bool Full();
    void display();
    bool Empty();
    int getFront();
   
};




#endif