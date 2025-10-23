#include <iostream>
#include "multistruct.h"
using namespace std;
int main(){
    MultiStruct ds;
    ds.SetMode(1);
    ds.insert(10);
    ds.insert(20);
    ds.insert(30);
    ds.display();
    cout << "dequeue: " << endl;
    cout << "1" << endl;
    ds.pop();
    ds.display();
    cout << "2" << endl;
    ds.pop();
    ds.display();
    cout << "3" << endl;
    ds.pop();
    ds.display();
    cout << "4" << endl;
    ds.pop();
    ds.display();

    ds.insert(30);
    ds.insert(40);
    ds.display();
    ds.SetMode(0);
    cout << "1" << endl;
    ds.pop();
    ds.display();
    cout << "2" << endl;
    ds.pop();
    ds.display();
}