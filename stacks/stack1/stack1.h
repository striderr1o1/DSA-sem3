#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;
class Stack{
    private:
    // const int size = 10;
    int array[20];
    int top;
    
    public:
    Stack();
    int getTop();
    int getArraySize();
    bool checkFull();
    bool checkEmpty();
    void push(int x);
    int pop();
    void display();
};

#endif