#include <iostream>
using namespace std;
int main(){
    //find largest 3 size sub array sum
    int array[8] = {1, 0, 5, 6, 3, 2, 4, 7};
    //window size 3
    int window_size = 3;
    int current = 0;
    for(int i = 0; i < window_size; i++){
        current += array[i];
    }
    int max = current;

    cout << "max after first three " << window_size << ": " << max << endl;
    int array_size = sizeof(array)/4;
    cout << array_size << endl;
    for(int i = 1; i <= array_size - window_size; i++){
        current = current - array[i - 1] + array[window_size-1 + i];
        if(current > max){
            max = current;
        }
    }
    cout << "Largest is " << max << endl;
}