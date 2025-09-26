#include "PriorityQueue.h"
PriorityQueue::PriorityQueue(){
    front = -1;
    rear = -1;
    count = 0;
    
}

bool PriorityQueue::CheckEmpty(){
    if(rear == front){
        return true;
    }
    else{
        return false;
    }
}

bool PriorityQueue::CheckFull(){
    if(count == size){
        return true;
    }
    else{
        return false;
    }
}

void PriorityQueue::enqueue(node x){
    
    if(!CheckFull()){
        rear++;
        array[rear] = x;
        count++;
    }
    else{
        cout << "Queue full\n";
    }
}
node PriorityQueue::dequeue(){
    if(!CheckEmpty()){
        int index;
        int prrty = array[0].priority;
        for(int i = 0; i < size; i++){
            if(array[i].priority > prrty){
                index = i;
            }
        }
        array[index].priority = 0;
        array[index].value = 0;
        return array[index];
    }
    else{
        cout << "Empty!\n";
        node n;
        n.priority = 0;
        n.value = 0;
        return n;
    }
}

void PriorityQueue::display(){
    for(int i = 0; i < size; i++){
        cout << "["<< array[i].priority << " "<< array[i].value <<"]";
    }
}





