#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* prev;
};

class List
{
private:
	Node * head;
public:
	List();
	~List();
	// Checks if the list is empty or not
	bool IsEmptyList();

	// Inserts a new node at the start of the list
	void insert_begin(int value);

	// Inserts a new node at the end of the list
	void insert_end(int value);

	// Inserts a new node with value ‘newV’ after the node 	containing value ‘oldV’. If a node with value ‘oldV’ does 	not exist, inserts the new node at the end.
	void insertafter(int oldV, int newV); //insert middle

	// Deletes the node containing the specified value
	void deleteNode(int value);

	// Displays the values stored in the list
	void traverse();
};

#endif