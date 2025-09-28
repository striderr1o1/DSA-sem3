#include "stack1.h"

Stack::Stack(){
    top = -1;
}
int Stack::getTop(){
    return top;
}
int Stack::getArraySize(){
    

    return sizeof(array)/1;
}
bool Stack::checkFull(){
    int arraySize = getArraySize();
    
    if(getTop() == arraySize-1){
        cout << "Array is Full" << endl;
        return true;
    }
    else
    return false;
}
bool Stack::checkEmpty(){
    if(getTop() == -1){
        return true;
    }
    else
    return false;
}
void Stack::push(string x){
    if(checkFull()){
        cout << "Cannot Push: Array Full\n";
    }
    else{
        array[++top] = x;
    }
}
string Stack::pop(){
    bool check = checkEmpty();
    if(check == true){
        cout << "Cannot pop\n";
        return 0;
    }
    else{
        
        return array[top--];
    }
}
void Stack::display(){
    for(int i = 0; i <= top; i++){
        cout << "[" << array[i] << "]";
    }
    cout << endl;
}