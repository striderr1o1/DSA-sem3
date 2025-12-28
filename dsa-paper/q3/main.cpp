#include <iostream>
#include "binarytree.h"
using namespace std;
int main(){
    BinaryTree bt;
    bt.OuterInsert(2, 5);
    bt.OuterInsert(3, 4);
    bt.OuterInsert(2,6);

    bt.Traversal();
}