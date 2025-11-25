#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[6]= {1, 2, 3, 4, 5, 6};

int target = 7;

int left = 0;
int right = sizeof(arr)/4 - 1;
int potential;
int count = 0;
while(left != right){
    potential = arr[left] + arr[right];
    if(potential == target){
        count++;
        cout << "Equal to target "<< count << endl;
        left++;
        right--;
    }
    else if(potential > target){
        right--;
    }
    else{
        left++;
    }
}
}
