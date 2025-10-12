#include <iostream>
#include <string>
#include "stack1.h"
using namespace std;

int main(){ 
    Stack s;
    bool palindrome = false;
    string word;
    cout << "Enter word: ";
    cin >> word;
    bool even;
    int size = word.size();
    if(size % 2 == 0){
        even = true;
    }
    else{
        even = false;
    }
    int middle = size/2;
    int count1 = 0;
    int count2 = 0;
    char temp;
    switch (even){
        case true:
        for(int i = 0; i < middle; i++){
            s.push(word[i]);
            count1++;
        }
        for(int i = middle; i < size; i++){
            temp = s.pop();
            if(temp == word[i]){
                count2++;
            }
        }
        if(count1 == count2){
            palindrome = true;
        }
        break;
        case false:
        for(int i = 0; i <= middle; i++){
            s.push(word[i]);
            count1++;
        }
        for(int i = middle; i < size; i++){
            temp = s.pop();
            if(temp == word[i]){
                count2++;
            }
        }
        if(count1 == count2){
            palindrome = true;
        }
        break;
    }
    if(palindrome == true){
        cout << "It is a palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }

    
}
