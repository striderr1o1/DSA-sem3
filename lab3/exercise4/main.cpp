#include <iostream>
#include <fstream>
#include "stack1.h"
using namespace std;
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
    ifstream ReadObj;
    ReadObj.open("file.txt");
    if(ReadObj.is_open()){
        
    }
}