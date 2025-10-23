#include <iostream>
using namespace std;
#include "linkedlist.h"
int main(){
    Stack l;
    
    
    l.pop();
    l.push(10);
    l.push(20);
    l.push(30);
    cout << "head: ";
   
    cout << endl;
    l.traverse();
    cout << "New: " << endl;
    l.pop();
    l.traverse();
    cout << "New: " << endl;
    l.pop();
    l.traverse();
    cout << "New: " << endl;
    l.pop();
    l.traverse();
    cout << "New: " << endl;
    l.pop();
    l.traverse();
}