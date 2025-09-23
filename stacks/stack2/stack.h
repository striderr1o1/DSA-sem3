#ifndef STACK2_H
#define STACK2_H

#include <iostream>
using namespace std;

// class Stack{
//     private:
//       int *stack_array;
//       int stackSize;
//       int top;

//     public:
//       Stack(int);
//       void push(int);
//       int pop();
//       bool IsEmpty();
//       bool IsFull();
//       void displayStack();
//       int Top();
// };

class stack
{private:
    int*stack_array;
    int top;
    int array_size;
public:
    stack(int size)
    {
    stack_array=new int[size];
    top=-1;
    array_size = size;
    }
    bool IsFull(){
        if(top == array_size -1){
            return true;
        }
        else{
            return false;
        }
    }
    bool IsEmpty(){
        if(top ==-1){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int x)
    {
    if(IsFull())
    {
    cout <<"stack over flow";
    return;
    }
    stack_array [++top]=x;
    cout <<"inserted" <<x;
    }
    void pop()
    {
    if(IsEmpty())
    {
    cout <<"stack under flow";
    return;
    }
    cout <<"deleted" << stack_array [top--];
    }
    void display()
    {
    if(IsEmpty())
    {
    cout <<" stack empty";
    return;
    }
    for(int i=top;i>=0;i--)
    cout << stack_array[i] <<" ";
    }
};
#endif