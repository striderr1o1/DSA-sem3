#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> m;
    int N;
    cout << "Enter the number of words: ";
    cin >> N;
    for(int i = 0; i < N; i++){
        string word;
        cin >> word;
        m[word] = m[word] + 1;//
    }
    for(auto &p : m){
        cout << p.first << " " << p.second << endl;
    }
}