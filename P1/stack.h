#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
class Stack{
private:
int array[10];
int top;

public:
Stack();
void push(int x);
void pop();
void display();

};

#endif