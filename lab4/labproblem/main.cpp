#include <iostream>
#include "stack1.h"
#include <string>
string PostfixToPrefix(string exp[]);
using namespace std;
int main(){
Stack s;

}
string PostfixToPrefix(string exp){
    Stack operands;
    
    int i = 0;
    while(exp[i]!='\0'){
        if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'){
            string op1;
            string op2;
            string temp;
            
           
            if(exp[i]=='+'){
                op1 = operands.pop();
                op2 = operands.pop();
                temp = "+" + op1 + op2;
                operands.push(temp);
            }
            else if(exp[i]=='-'){
                op1 = operands.pop();
                op2 = operands.pop();
                temp = "-" + op1 + op2;
                operands.push(temp);
            }
            else if(exp[i]=='*'){
                op1 = operands.pop();
                op2 = operands.pop();
                temp = "*" + op1 + op2;
                operands.push(temp);
            }
            else if(exp[i]=='/'){
                op1 = operands.pop();
                op2 = operands.pop();
                temp = "/" + op1 + op2;
                operands.push(temp);
            }

        }
        else{
            operands.push(exp[i]);
        }
        i++;
    }
    operands.display();
    return "null";
}