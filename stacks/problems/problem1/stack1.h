#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;
class Stack{
    private:
    // const int size = 10;
    char array[100];
    int top;
    
    public:
    Stack();
    int getTop();
    int getArraySize();
    bool checkFull();
    bool checkEmpty();
    void push(char x);
    char pop();
    void display();
};

#endif