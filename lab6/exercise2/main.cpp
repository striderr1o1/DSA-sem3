#include <iostream>
#include "queue.h"
using namespace std;
int main(){
Queue q;
int value;
for(int i = 0; i < 5; i++){
    cin >> value;
    q.enqueue(value);
    cout << "display: " << endl;
    q.display();
}
cout << "dequeue:" << endl;
q.display();
for(int i = 0; i < 8; i++){
    q.dequeue();
    cout << "display: " << endl;
    q.display();
}
}