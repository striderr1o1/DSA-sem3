#include <iostream>
#include "linkedlist.h"
using namespace std;
int main(){
List list;
cout << "Count: " << list.TotalNodes() << endl;
list.insert_end(10);
cout << "Count: " << list.TotalNodes()<< endl;
list.insert_end(20);
cout << "Count: " << list.TotalNodes()<< endl;
list.insert_begin(10);
cout << "Count: " << list.TotalNodes()<< endl;

cout << "Position of 20: " << list.NodePosition(20)<< endl; 
}
