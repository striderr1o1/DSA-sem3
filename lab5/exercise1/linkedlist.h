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
	// Constructor
	List();

	// Destructor
	~List();

	// Checks if the list is empty or not
	bool IsListEmpty();

	// Inserts a new node with value ‘newV’ after the node 	containing value ‘oldV’. If a node with value ‘oldV’ does 	not exist, inserts the new node at the end.
	void insertafter(int oldV, int newV); 
	
	// Deletes the node containing the specified value
	void deleteNode(int value);

	// Inserts a new node at the start of the list
	void insert_begin(int value);

	// Inserts a new node at the end of the list
	void insert_end(int value);

	// Displays the values stored in the list
	void traverse();

	int TotalNodes();

	int NodePosition(int value);

	void SwapPositions(Node* p1, Node* p2);

	void Swap(int v1, int v2);

	void Update(int v, int UserValue);
};

#endif