#include <iostream>
#include "PriorityQueue.h"
using namespace std;
int main(){
PriorityQueue queue;
for(int i = 0; i < 5; i++){
    node n;
    cout << "Node " << i+1 << endl;
    do{
        cout << "Enter priority: "; cin >> n.priority;
        if(n.priority == 0){
            cout << "\n0 not allowed!\n";
        }
    }while(n.priority==0);
    cout << "\nEnter Value: "; cin >> n.value;
    queue.enqueue(n);
}
queue.display();
cout << endl;
node array[5];
for(int i = 0; i < 5; i++){
   try{
    array[i] = queue.dequeue();
   }
   catch(exception e){
    cout << "Exception: " << e.what() << endl;
   }
   
   queue.display();
   cout << endl;
}
}