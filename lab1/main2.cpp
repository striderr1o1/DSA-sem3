#include <iostream>
using namespace std;
int GetSum(int array[], int size, int keyValue);
int main(){
int array[10]={10,4,23,5,25,30,36,50};
int multipleSum = GetSum(array, 10, 2);
cout << "Sum of multiples is: " << multipleSum << endl;
}
int GetSum(int array[], int size, int keyValue){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(array[i]%keyValue == 0){
            sum+=array[i];
        }
    }
    return sum;
}