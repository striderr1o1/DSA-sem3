#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>
using namespace std;
class Stack{
    private:
    // const int size = 10;
    string array[100];
    int top;
    
    public:
    Stack();
    int getTop();
    int getArraySize();
    bool checkFull();
    bool checkEmpty();
    void push(string x);
    string pop();
    void display();
};

#endif