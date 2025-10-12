#include "queue.h"

CircularQueue::CircularQueue(){
    front = 0;
    rear = 0;
    count = 0;
}
void CircularQueue::enqueue(int n){
    
    if(Full() == true){
        cout << "Array full\n";
    }
    else{
        Q[rear++] = n;
        count++;
    if(rear == arraysize()){
        rear = 0;
    }
    }
}

void CircularQueue::dequeue(){
    if(!Empty()){
        count--;
        Q[front] = 0;
        front++;
        if(front == arraysize()){
            front = 0;
        }
    }
    
}

int CircularQueue::arraysize(){
    int size = (sizeof(Q))/4;
    return size;
}
bool CircularQueue::Full(){
    if(count == arraysize()){
        return true;
    }
    else
    return false;
}
bool CircularQueue::Empty(){
    if(count == 0){
         cout << "Its empty" << endl;
        return true;
    }
    else{
       
        return false;
    }
}
void CircularQueue::display(){
    for(int i = 0; i < arraysize(); i++){
        cout << Q[i] << " ";
    }
    cout << endl;
}
int CircularQueue::getFront(){
    return Q[front];
}