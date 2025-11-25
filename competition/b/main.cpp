#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    set<char> SET;
    map<char, int> mp;

    string str;
    cin >> str;

    // for(int i = 0; i < str.length(); i++){
    //     mp[str[i]] = 0;
    // }

    for(int i = 0; i < str.length(); i++){
        if(!SET.count(str[i])){
            SET.insert(str[i]);
            mp[str[i]] = 1;
        }
        else{
            mp[str[i]] = mp[str[i]] + 1;
            
        }
    }
    for(int i = 0; i < str.length(); i++){
        cout << str[i] << mp[str[i]];
    }
    cout << endl;
}

