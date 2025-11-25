#include <iostream>
#include <string>
using namespace std;
string ReverseString(string s);
int main(){
    string a = "madamm jeo";
    string s = ReverseString(a);
    cout << s << endl;
}
string ReverseString(string s){
    if(s.length() == 1){
        return s;
    }
    //abcd
    string str2 = "";
    for(int i = 1; i < s.length(); i++){
        str2 += s[i];
    
    }
    string returnedString = ReverseString(str2);
    returnedString += s[0];
    return returnedString;
}