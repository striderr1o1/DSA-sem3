#include "binarytree.h"

BinaryTree::BinaryTree(){
    root = nullptr;
}

Node* BinaryTree::insert(Node* &root, int ID, int Severity){
    if(root == nullptr){
        Node* newnode = new Node;
        newnode->logID = ID;
        newnode->severity = Severity;
        newnode->left = nullptr;
        newnode->right = nullptr;
        root = newnode;
        
        return newnode;
    }

    Node* node;
    if(Severity > root->severity){//if greater go left
        node = insert(root->left, ID, Severity);
    }
    else if(Severity < root->severity){
        node = insert(root->right, ID, Severity);
    }
    else{
        
        if(ID < root->logID){
            node = insert(root->left, ID, Severity);
        }
        else{
            node = insert(root->right, ID, Severity);
        }
    }
    return node;
}

Node* BinaryTree::OuterInsert(int logID, int severity){
    Node* returningNode = insert(root, logID, severity);
    return returningNode;
}

void BinaryTree::InnerTraversal(Node* node){
    if(node == nullptr){
        // cout << "null";
        return;
    }
    cout << node->severity << endl;
    InnerTraversal(node->left);
    InnerTraversal(node->right);
}

void BinaryTree::Traversal(){
    InnerTraversal(root);

}

Node* BinaryTree::deleteCriticalII(int thres){
    deleteCritical(root, thres);
}

Node* BinaryTree::deleteCritical(Node* node, int thres){
    if(node->severity >= thres){
        if(node->left == nullptr && node->right == nullptr){
            node = nullptr;
            
        }

    }
}