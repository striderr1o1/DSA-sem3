#include <iostream>
#include "LLQ.h"
using namespace std;
int main(){
    int value;
    LLQueue list;
    for(int i = 0; i < 16; i++){
        list.enqueue(i);
    }
    while(1){
        cout << "Enter value: ";
        cin >> value;
        list.enqueue(value);
        list.display();
        list.dequeue();
    }
}