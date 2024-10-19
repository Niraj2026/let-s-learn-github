//program to print the reverse of given array.
#include <iostream>
using namespace std;

//funtion to reverse the array
void reverse(int arr[], int n) {
    int start=0;
    int end=n-1;

    while (start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//function to print the array
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout <<arr[i]<<" ";
    }
    cout <<endl;
}


int main() {
    
    //taking size of an array
    int n;
    cout <<"Enter the size of an array: ";
    cin >>n;

    //input elements in the array
    int arr[n];
    cout <<"Enter the elements of the array: "<<endl;
    for (int i=0; i<n; i++) {
        cin >>arr[i];
    }

    //display the elements of the array 
    cout <<"\nOriginal array: "<<endl;
    printArray(arr, n);

    cout <<"\nArray after reverse: "<<endl;
    reverse(arr, n);
    printArray(arr, n);

    return 0;
}