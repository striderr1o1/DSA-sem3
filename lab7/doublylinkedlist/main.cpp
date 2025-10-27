#include <iostream>
#include "linkedlist.h"
using namespace std;
int main(){
    List l1;
    l1.insert_end(5);
    l1.insert_end(3);
    l1.insert_begin(1);
    l1.insertafter(5, 6);
    
    l1.traverse();
    cout << "deleting 1" << endl;
    l1.deleteNode(1);
    l1.traverse();
    cout << "deleting 3" << endl;
    l1.deleteNode(3);
    l1.traverse();

    cout << "Adding" << endl;
    l1.insert_end(4);
    l1.traverse();
    
}