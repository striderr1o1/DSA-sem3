#include "multistruct.h"

MultiStruct::MultiStruct(){
    head = nullptr;
    tail = nullptr;
    mode = 0;    
}

void MultiStruct::insert(int v){
    int priority;
    switch (mode){
        case 0:
        insert_stack(v);
        break;
        case 1:
        insert_queue(v);
        break;
        case 2:
        cout << "Enter Priority: ";
        cin >> priority;
        insert_priorityQ(v, priority);
        break;
    }
}


void MultiStruct::display(){
    switch (mode){
        case 0:
        display_stack();
        break;
        case 1:
        display_queue();
        break;
        case 2:
        display_pqueue();
        break;
    }
}

void MultiStruct::pop(){
    switch (mode){
        case 0:
        stack_pop();
        break;
        case 1:
        queue_pop();
        break;
        case 2:
        pqueue_pop();
        break;
    }
}

void MultiStruct::SetMode(int m){
    if(m>-1 && m < 3){
        mode = m;
    }
    else
    cout << "Select between 0 (stack), 1 (queue), 2 (priority queue)";
}