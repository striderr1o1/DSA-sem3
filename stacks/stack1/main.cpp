#include <iostream>
#include "stack1.h"
using namespace std;
int main(){
Stack s;
int x; 
for(int i = 0; i < 7; i++){
    cin >> x;
    s.push(x);
}
s.display();
for(int i = 0; i < 7; i++){
    
    s.pop();
    s.display();
}
}