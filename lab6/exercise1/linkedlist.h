#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class Stack
{
private:	
	Node * head; 
public:
	Stack();
   ~Stack();
    void push(int value);
	void pop();
	void traverse();


};

#endif