#include <iostream>
using namespace std;
int* SelectionSort(int arr[], int size);
int* InsertionSort(int arr[], int size);

struct Node
{
    /* data */
    int data;
    Node* next;
};

struct List
{
    Node* head;
};

int main(){
    Node* n1, *n2, *n3 = new Node;
    n1->data = 3;
    n2->data = 1;
    n3->data = 2;
    n1->next = n2;
    n2->next = n3;
    n3->next = nullptr;
    List l1;
    l1.head = n1;
}
int* SelectionSort(int arr[], int size){
    int min = 0;
    int index = 0;
    // int arrsize = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        min = arr[i];  // this is the first value of array
        for(int j = i; j < size; j++){
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }
        }
        //swap the minimum value of the array with the first
        //element of the array
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
        
    }
    return arr;
}

int* InsertionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int j = i;
        while(j>0){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }j--;
        }
    }
    for(int k = 0; k < size; k++){
        cout << arr[k] << endl;
    }
    return arr;
}

void SelectionSort(List l1){
    Node* temp = l1.head;
    while(temp != nullptr){
        Node* curr = temp;
    }
}

