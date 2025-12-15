#include "BT.h"

BinaryTree::BinaryTree(){
    root = nullptr;
}

void BinaryTree::PreOrderTraversalFromRoot(){
    PreOrderTraverse(root);
}

void BinaryTree::PreOrderTraverse(Node* startingNode){
    if(startingNode!=nullptr)                       
    cout << startingNode->value << endl;
    if(startingNode == nullptr){
        return;
    }
    PreOrderTraverse(startingNode->left);
    PreOrderTraverse(startingNode->right);
}

void BinaryTree::PostOrderTraversalFromRoot(){
    PostOrderTraverse(root);
}

void BinaryTree::PostOrderTraverse(Node* startingNode){
    if(startingNode == nullptr){
        return;
    }
    PostOrderTraverse(startingNode->left);
    PostOrderTraverse(startingNode->right);
    if(startingNode!=nullptr)                       
    cout << startingNode->value << endl;
}

void BinaryTree::InOrderTraversalFromRoot(){
    InOrderTraverse(root);
}

void BinaryTree::InOrderTraverse(Node* startingNode){
    if(startingNode == nullptr){
        return;
    }
    InOrderTraverse(startingNode->left);
    if(startingNode!=nullptr)                       
    cout << startingNode->value << endl;
    InOrderTraverse(startingNode->right);
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

void BinaryTree::insertNodeInner(Node* &node, int data){
    
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
        cout << endl;
        return;
    }
    if(data <= node->value){//
        //go left
        cout << "going left of " << node->value << " to add " << data << endl;
        insertNodeInner(node->left, data);
        return;
    }
    if(data > node->value){//go right
        // cout << "added" << endl;
        cout << "going right of " << node->value << " to add " << data << endl;
        insertNodeInner(node->right, data);
        return;
    }
}
