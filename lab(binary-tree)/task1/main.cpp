#include <iostream>
#include "BT.h"
using namespace std;
int main(){
    BinaryTree BT;
    BT.insertNode(4);
    BT.insertNode(10);
    BT.insertNode(15);
    BT.insertNode(7);
    BT.insertNode(8);
    BT.insertNode(16);
    BT.PreOrderTraversalFromRoot();
    
}