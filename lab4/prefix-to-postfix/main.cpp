#include <iostream>
#include <string>
#include "stack1.h"
using namespace std;
string ReverseExpression(string expression);
string PrefixToPostfix(string expression);
int main(){
    string x = "+*34*25";
    string postfix = PrefixToPostfix(x);
    cout << postfix << endl;
}

string PrefixToPostfix(string expression){
    string ReversedString = ReverseExpression(expression);
    Stack s;
    string op1;
    string op2;
    string combined;
    
    int ExpressionSize = ReversedString.size();
    cout << "Expression Size: " << ExpressionSize << endl;
    for(int i = 0; i < ExpressionSize; i++){
        
        string instance = "";
        instance.push_back(ReversedString[i]);
        
        cout << "letter " << i+1 << ": " << instance << endl;
        if(instance == "+" || instance == "-" || instance == "/" || instance == "*"){

            if(instance == "+"){
                op1 = s.pop();
                op2 = s.pop();
                combined = op1 + op2 + '+';
                cout << "Op1: " << op1 << " Op2: " << op2 << " operator: +" << endl;
                cout << "Combined new string: " << combined << endl;
                
                s.push(combined);
                
            }
            else if(instance == "-"){
                op1 = s.pop();
                op2 = s.pop();
                combined = op1 + op2 + '-';
                cout << "Op1: " << op1 << " Op2: " << op2 << " operator: -" << endl;
                cout << "Combined new string: " << combined << endl;
                
                s.push(combined);
                
            }
            else if(instance == "/"){
                op1 = s.pop();
                op2 = s.pop();
                combined = op1 + op2 + '/';
                cout << "Op1: " << op1 << " Op2: " << op2 << " operator: /" << endl;
                cout << "Combined new string: " << combined << endl;
                
                s.push(combined);
                
            }
            else if(instance == "*"){
                op1 = s.pop();
                op2 = s.pop();
                combined = op1 + op2 + '*';
                cout << "Op1: " << op1 << " Op2: " << op2 << " operator: *" << endl;
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
string ReverseExpression(string expression){
    int size = expression.size();
    string ReversedString;
    for(int i = size-1; i >= 0; i--){
        ReversedString+=expression[i];
    }
    return ReversedString;
}