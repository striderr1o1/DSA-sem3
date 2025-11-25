#include "BT.h"

BinaryTree::BinaryTree(){
    root = nullptr;
}

void BinaryTree::PreOrderTraversalFromRoot(){
    PreOrderTraverse(root);
}

void BinaryTree::PreOrderTraverse(Node* startingNode){
    // if(startingNode!=nullptr)
    // cout << startingNode->value << endl;
    if(startingNode == nullptr){
        return;
    }
    PreOrderTraverse(startingNode->left);
    PreOrderTraverse(startingNode->right);
}

Node* BinaryTree::SearchNode(int data){
      Node* node = FindNode(root, data);
      if(node != nullptr){
        return node;
      }
      else{
        cout << "Not found" << endl;
        return nullptr;
      }
}
Node* BinaryTree::FindNode(Node* node, int data){
    if(node->value == data){
        return node;
    }
    if(node == nullptr){
        return nullptr;
    }
    Node* leftNodeSearch = FindNode(node->left, data);
    if(leftNodeSearch != nullptr){
        return leftNodeSearch;
    }
    Node* rightNodeSearch = FindNode(node->right, data);
    if(rightNodeSearch != nullptr){
        return rightNodeSearch;
    }
    else{
        return nullptr;
    }

}

void BinaryTree::insertNode(int data){
    insertNodeInner(root, data);
}

void BinaryTree::insertNodeInner(Node* node, int data){
    
   
    if(root == nullptr){
        Node* newnode = new Node;
        newnode->value = data;
        newnode->left = nullptr;
        newnode->right = nullptr;
        root = newnode;
        cout << "Initialized root: " << root->value << endl;
        return;
    }
    if(node == nullptr){
        Node* newnode = new Node;
        newnode->value = data;
        newnode->left = nullptr;
        newnode->right = nullptr;
        node = newnode;
        return;
    }
    if(data <= node->value){//
        //go left
        insertNodeInner(node->left, data);
        return;
    }
    if(data > node->value){//go right
        cout << "added" << endl;
        insertNodeInner(node->right, data);
        return;
    }
}