#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    pair<int, string> p;
    p = {1, "bahria"};
    cout << p.second << endl; 

    map<int, string> m;
    m.insert(p);
    m[1] = "kamran";
    m[3] = "College";
    m[2] = "Ranger";
    // map<int, string>::iterator it;// iterator object
    // for(it = m.begin(); it != m.end(); it++){//point to first, run until not reach the end of map, increase iterator
    //     cout << it->first << " " << it->second << endl;
    // }
    cout << m.size() << endl;
    for(auto pr : m){

        cout << pr.first << " " << pr.second << endl;
    }

    string a = "I am noob";
    reverse(a.begin() + 4, a.end());
    cout << a << endl;

    vector<int> v = {9,85,3,2,6,7};
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < v.size() -1; i++){
        cout << v[i] << endl;
    }

    auto it = find(a.begin(), a.end(), 'n');
    if(*it){
        cout << "found";    }

}