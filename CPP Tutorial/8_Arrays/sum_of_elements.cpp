//program to print the sum of all the elements.
#include <iostream>
using namespace std;

//function to print the sum of all elements in the array.
void sumArray(int arr[], int n) {
    int sum=0;
    for (int i=0; i<n; i++) {
        sum =sum+arr[i];
    }
    cout <<"The sum of all elements in the array : "<<sum;
}

int main() {

    //to take the size of an array
    int n;
    cout <<"Enter the size of an array: ";
    cin >>n;

    //input elements in the array
    int arr[n];
    cout <<"Enter the "<<n<< " elements in the array: "<<endl;
    for (int i=0; i<n; i++) {
        cin >>arr[i];
    }
    
    sumArray(arr,n);
    return 0;
}