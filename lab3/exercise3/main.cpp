#include <iostream>
#include <cstring>
#include <fstream>
#include "stack1.h"
using namespace std;
bool IsValidExpression();
int main(){
    ofstream ExpressionFile;
    ExpressionFile.open("file.txt");
    if(ExpressionFile.is_open()){
        cout << "Enter any expression: ";
        char expression[50];
        cin.getline(expression, 50);
        ExpressionFile << expression;
        ExpressionFile.close();
    }

    bool valid = IsValidExpression();
    if(valid == true){
        cout << "Valid\n";
    }
    else{
        cout << "false\n";
    }
    
    
}

bool IsValidExpression(){
    ifstream ReadExpFile;
    ReadExpFile.open("file.txt");
    char exp[50];
    char a;
    Stack s;
    ReadExpFile >> noskipws;
    int i = 0;
    while(ReadExpFile >> a){
        exp[i] = a;
        
        if(exp[i]=='('){
            s.push(exp[i]);
        }
        else if(exp[i]==')'){
            s.pop();
        }
        i++;
        // s.display();

    }
    s.display();
    cout << exp << endl;
    if(s.checkEmpty()==true){
        
        return true;
    }
    else{
        return false;
    }
    
}