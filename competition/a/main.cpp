#include<iostream>
#include <string>
using namespace std;
void CheckStringLock(string s);
int main() {
string s;
cin >> s;
CheckStringLock(s);
}
void CheckStringLock(string s){
    if(s.length()== 7){
        if(s[0] == s[s.length()-1]){
            int middle = s.length()/2;
            if(s[middle]=='*'){
                cout << "Unlocked" << endl;
                return;
            }
        }
    }
    cout << "ACCESS DENIED" << endl;
}