#include <iostream>
using namespace std;
int average(int sum, int size);
int sumArray(int array[], int size);
int* MinMax(int array[],int size);
int main() {
const int size = 10;
int *array = new int[size];
for(int i = 0; i < size; i++){
    cin >> array[i];
}
int sum = sumArray(array, size);
int avg = average(sum, size);
cout << "Sum of array" << " is " << sum << endl;
cout << "Average is " << avg << endl;
int *arr = MinMax(array, size);
cout << "Minimum value: " << arr[0] << endl;
cout << "Maximum value: " << arr[1] << endl;
}

int sumArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum+= array[i];
    }
    return sum;
}
int average(int sum, int size){
return sum / size;
}
int* MinMax(int array[],int size){
    int min = array[0];
    int max = array[0];
    int *returningArray = new int[2];
    for(int i = 1; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
        if(array[i]>max){
            max = array[i];
        }
    }
    returningArray[0] = min;
    returningArray[1] = max;
    return returningArray;
}