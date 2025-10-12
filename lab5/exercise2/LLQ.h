#ifndef LLQ_H
#define LLQ_H

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LLQueue{
    private:
    Node* front;
    Node* rear;
    Node* head;
    public:
    LLQueue();
    void enqueue(int value);
    void dequeue();
    void display();

};

#endif