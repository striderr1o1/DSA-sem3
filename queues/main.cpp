#include <iostream>
#include "queue.h"
using namespace std;
int main(){
    queue Q;
    int n;
    for(int i = 0; i < Q.arraysize(); i++){
        cin >> n;
        Q.insert(n);
    }
    Q.display();
}