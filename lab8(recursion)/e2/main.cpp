#include <iostream>
using namespace std;
int sum(int arr[], int size);
int main(){
    int arr[] = {2,5,3,6};
    int Sum = sum(arr, 4);
    cout << Sum << endl;

}
int sum(int arr[], int size){
    if(size == 1){
        return arr[size-1];
    }
    int num = arr[size -1];
    return num + sum(arr ,size - 1);
    
}
