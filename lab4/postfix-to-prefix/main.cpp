#include <iostream>
#include <string>
#include "stack1.h"
using namespace std;

string PostfixToPrefix(string expression);
int main(){
    string x = "ABC*+";
    string postfix = PostfixToPrefix(x);
    cout << postfix << endl;
}

string PostfixToPrefix(string expression){
    
    Stack s;
    string op1;
    string op2;
    string combined;
    
    int ExpressionSize = expression.size();
    cout << "Expression Size: " << ExpressionSize << endl;
    for(int i = 0; i < ExpressionSize; i++){
        
        string instance = "";
        instance.push_back(expression[i]);
        
        cout << "letter " << i+1 << ": " << instance << endl;
        if(instance == "+" || instance == "-" || instance == "/" || instance == "*"){

            if(instance == "+"){
                op1 = s.pop();
                op2 = s.pop();
                combined = '+' + op2 + op1;
                cout << " operator: + " << "Op1: " << op1 << " Op2: " << op2 << endl;
                cout << "Combined new string: " << combined << endl;
                
                s.push(combined);
                
            }
            else if(instance == "-"){
                op1 = s.pop();
                op2 = s.pop();
                combined = '-' + op2 + op1;
                cout << " operator: - " << "Op1: " << op1 << " Op2: " << op2 << endl;
                cout << "Combined new string: " << combined << endl;
                
                s.push(combined);
                
            }
            else if(instance == "/"){
                op1 = s.pop();
                op2 = s.pop();
                combined = '/' + op2 + op1;
                cout << " operator: / " << "Op1: " << op1 << " Op2: " << op2 << endl;
                cout << "Combined new string: " << combined << endl;
                
                s.push(combined);
                
            }
            else if(instance == "*"){
                op1 = s.pop();
                op2 = s.pop();
                combined ='*' + op2 + op1;
                cout << " operator: * " << "Op1: " << op1 << " Op2: " << op2 << endl;
                cout << "Combined new string: " << combined << endl;
                
                s.push(combined);
                
            }
            
        }
        else{
            cout << "Pushing " << instance << " to stack " << endl;
            s.push(instance);
        }
    }
    string Postfix = s.pop();
    cout << "Final expression: " << Postfix << endl;
    return Postfix;
    
}
