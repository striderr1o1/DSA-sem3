#include <iostream>
using namespace std;
void print(int n);
int main(){
print(10);
}

void print(int n){
    if(n == 0){
        cout << n << endl;
        return;
    }
    cout << n << endl;
    print(n-1);
}
