#include <iostream>
using namespace std;
int AckerrmanFunction(int m, int n);
int main(){
int num = AckerrmanFunction(3,3);
cout << num << endl;
}

int AckerrmanFunction(int m, int n){
    if(m == 0){
        return n + 1;
    }
    if(m != 0 && n == 0){
        return AckerrmanFunction(m-1, 1);
    }
    return AckerrmanFunction(m-1, AckerrmanFunction(m, n-1));
}