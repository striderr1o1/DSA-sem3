#include <iostream>
#include "queue.h"
using namespace std;
int main(){
    CircularQueue Q;
    int n;
    for(int i = 0; i < Q.arraysize(); i++){
        cin >> n;
        Q.enqueue(n);
        Q.display();
    }
    for(int i = 0; i < 10; i++){
        Q.dequeue();
        
        Q.display();
        cout << "Inserting 1" << endl;
        Q.enqueue(1);
    }
  
    
}