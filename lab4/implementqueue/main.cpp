#include <iostream>
#include "PriorityQueue.h"
using namespace std;
int main(){
PriorityQueue queue;
for(int i = 0; i < 5; i++){
    node n;
    cout << "Node " << i+1 << endl;
    cout << "Enter priority: "; cin >> n.priority;
    cout << "\nEnter Value: "; cin >> n.value;
    queue.enqueue(n);
}
queue.display();
cout << endl;
node array[5];
for(int i = 0; i < 5; i++){
   array[i] = queue.dequeue();
   queue.display();
   cout << endl;
}
}