#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class List
{
private:	
	Node * head; 
public:
	List();
   ~List();
    void push(int value);
	void pop();
	void traverse();
	void showHead();

};

#endif