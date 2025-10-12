#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class Stack{
    private:
    struct node *top;
    public:
    Stack() // constructure
    {
    top=NULL;
    }
    void push(); // to insert an element
    void pop();
    void show();
};

#endif