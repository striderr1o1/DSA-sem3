#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
using namespace std;

struct Node {
    int logID;
    int severity;
    Node *left;
    Node *right;
};

class BinaryTree{
    private:
    Node* root;
    Node* insert(Node* &root, int logID, int severity);
    void InnerTraversal(Node* node);
    Node* deleteCritical(Node* root, int threshold);
    public:
    BinaryTree();
    Node* OuterInsert(int logID, int severity);
    void Traversal();
    Node* deleteCriticalII(int threshold);

};

#endif