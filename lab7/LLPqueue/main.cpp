#include <iostream>
#include "queue.h"
using namespace std;
int main(){
    PriorityQueue P1;
    P1.enqueue(4,2);
    P1.enqueue(3,3);
    P1.enqueue(2,4);
    P1.traverse();
    P1.dequeue();

    cout << "dequeued----" << endl;
    P1.traverse();
    P1.dequeue();

    cout << "dequeued----" << endl;
    P1.traverse();
    P1.dequeue();

    cout << "dequeued----" << endl;
    P1.traverse();

    P1.enqueue(10,4);
    P1.enqueue(22,5);
    P1.traverse();
    P1.dequeue();

    cout << "dequeued----" << endl;
    P1.traverse();
    P1.dequeue();

    cout << "dequeued----" << endl;
    P1.traverse();
    P1.dequeue();

    cout << "dequeued----" << endl;
    P1.traverse();
}