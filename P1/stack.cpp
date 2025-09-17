#include "stack.h"

Stack::Stack(){
    top = -1;
}
void Stack::push(int x){
    array[++top] = x;
}
void Stack::pop(){
    array[top] = 0;
    top--;
}
void Stack::display(){
    for(int i = top; i >= 0; i--){
        cout << "element " << i << ": " << array[i] << endl;
    }
}