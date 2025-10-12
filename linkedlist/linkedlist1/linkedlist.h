#ifndef LINKED_LIST
#define LINKED_LIST

#include <iostream>
#include "node.cpp"
using namespace std;

class LinkedList{
    private:
    node* head;
    public:
    LinkedList();
    void InsertNode(node x);
    void Display();
};
#endif