#include <iostream>
#include "stack1.h"
using namespace std;
int main(){
    Stack s;
    int number;
    cout << "Enter a number:" << endl;
    cin >> number;
    int rem;
    int quot = number;
    while(quot != 0){
        cout << quot << " / 2 " << endl;
        rem = quot % 2;
        quot = quot / 2;
        s.push(rem);
    }
    
    int num;
    cout << "Binary Form: ";
    while(s.getTop() != -1 ){
        num = s.pop();
        cout << num;
    }
    cout << endl;
}