#include <iostream>
#include <stack>
using namespace std;
bool isPalindrome(string a);

int main(){
string s = "abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjihgfedcbaabcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjihgfedcba";
//maddam
cout << isPalindrome(s);
}

// bool isPalindrome(string s){
// stack<char> stck1;
// string a;
// string b;

// if(s.length()%2 == 0){
//     for(int i = 0; i < s.length()/2; i++){
//         stck1.push(s[i]);
//     }
//     for(int i = s.length()/2; i < s.length(); i++){
//         b+=s[i];
//         a+=stck1.top();
//         stck1.pop();
//     }
//     if(a == b){
//         return true;
//     }
// }
// else{
//     int length = s.length();
//     int i = 0;
//     while(i<=length/2){
//         stck1.push(s[i]);
//         i++;
//     }
//     int j = length/2;
//     while(j < length){
//         b+=s[j];
//         a+=stck1.top();
//         stck1.pop();
//         j++;
//     }
//     if(a == b){
//         return true;
//     }
    
// }
// return false;

// }
// MADAM
//   LR
bool isPalindrome(string s){
    int left = 0;
    string a;
    string b;// ABCCBA
    int right = s.length() -1;
    while(left < right){
        if(s[left] != s[right]){
            return false;

        }
        left++; right--;
    }
    return true;
}