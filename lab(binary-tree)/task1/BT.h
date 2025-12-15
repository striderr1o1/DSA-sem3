#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* left;
    Node* right;
    /* data */
};
class BinaryTree{
    private:
    Node* root;
    Node* FindNode(Node* startingNode, int data);
    void insertNodeInner(Node*& node, int data);
    
    public:
    BinaryTree();
    void PreOrderTraversalFromRoot();
    void PreOrderTraverse(Node* startingNode);
    void PostOrderTraversalFromRoot();
    void PostOrderTraverse(Node* startingNode);
    void InOrderTraversalFromRoot();
    void InOrderTraverse(Node* startingNode);
    Node* SearchNode(int data);
    void insertNode(int data);
};
#endif