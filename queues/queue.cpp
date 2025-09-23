#include "queue.h"

queue::queue(){
    front = -1;
    rear = 0;
}
void queue::insert(int n){
    
    if(checkFull() == true){
        cout << "Array full\n";
    }
    else{
        Q[rear++] = n;
    if(rear == arraysize()-1){
        rear = 0;
    }
    }
}
void queue::del(){
    front++;
    Q[front] = 0;
}
int queue::arraysize(){
    int size = (sizeof(Q))/4;
    return size;
}
bool queue::checkFull(){
    if(rear == front){
        return true;
    }
    else
    return false;
}
void queue::display(){
    for(int i = 0; i < arraysize(); i++){
        cout << Q[i] << " ";
    }
}
