#include <iostream>
#include <cstring>
#include "stack1.h"
#include <bits/stdc++.h>
using namespace std;
void EvaluatePostfix(char expression[]);
int main(){
//evaluate a postfix expression Example: "231*+9-" → result = -4 
//[5,9]
//5-9
//"-4"
char exp[10]="231*+9-";
EvaluatePostfix(exp);
}

void EvaluatePostfix(char expression[]){
    Stack operands;
    int size = strlen(expression);
    cout << "Expression: " << expression << endl;
    cout << size << endl;
    int answer;
    char PoppedFirst;
    char PoppedSecond;
    for(int i = 0; i < size; i++){
        if(expression[i]=='+'||expression[i]=='-'||expression[i]=='*'||expression[i]=='/'){
            PoppedFirst = operands.pop();
            PoppedSecond = operands.pop();
            cout << "Popped: " << PoppedFirst << endl;
            cout << "Popped: " << PoppedSecond << endl;
            
            char operation = expression[i];
            cout << "operation: " << operation << endl;
            int temp;
            switch (operation){
                case '+':
                    temp = static_cast<int>(PoppedSecond) + static_cast<int>(PoppedFirst);
                    temp = static_cast<char>(temp);
                    operands.push(temp);
                    cout << PoppedSecond << " " << operation << " " << PoppedFirst << " = " << temp; 
                    break;
                case '-':
                    temp = static_cast<int>(PoppedSecond) - static_cast<int>(PoppedFirst);
                    temp = static_cast<char>(temp);
                    operands.push(temp);
                    cout << PoppedSecond << " " << operation << " " << PoppedFirst << " = " << temp;
                    break; 
                case '*':
                    temp = static_cast<int>(PoppedSecond) * static_cast<int>(PoppedFirst);
                    
                    temp = static_cast<char>(temp);
                    operands.push(temp);
                    cout << PoppedSecond << " " << operation << " " << PoppedFirst << " = " << temp;
                    break; 
                case '/':
                    temp = static_cast<int>(PoppedSecond) / static_cast<int>(PoppedFirst);
                    temp = static_cast<char>(temp);
                    operands.push(temp);
                    cout << PoppedSecond << " " << operation << " " << PoppedFirst << " = " << temp;
                    break; 
            }
        }
        else{
            cout << "Pushing: " << expression[i] << endl;
            operands.push(expression[i]);
        }
        cout << endl << "Current Stack: ";
        operands.display();
    }
    operands.display();
}