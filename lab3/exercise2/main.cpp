#include <iostream>
#include <fstream>

#include "stack1.h"
using namespace std;
int main(){
    fstream fileObj;
    fileObj.open("file.txt", ios::out);
    if(fileObj.is_open()){
        char string[100];
        cout << "Enter string:";
        cin.getline(string, 100);
        fileObj << string;
        fileObj.close();
    }

    ifstream fileObj2;
    fileObj2.open("file.txt");
    if(fileObj2.is_open()){
        Stack s;
        char a;
        fileObj2 >> noskipws;
        while (fileObj2 >> a)
        {
                s.push(a);
                s.display();
                      
        }
        fileObj2.close();
        char str[100];
        int i = 0;
        ofstream fileObj3;
        fileObj3.open("file2.txt");
        if(fileObj3.is_open()){
            while(s.getTop() != -1){
            str[i] = s.pop();
            cout << str[i];
            fileObj3 << str[i];
            i++;
            
        }
        fileObj3.close();
        }
        
        
        
    }
}