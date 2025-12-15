#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;// enter nxn matrix
for(int i = 1; i <= n*n; i++){
    cout << i << " ";
    if(i%n == 0){
    
    cout << endl;}
}
}