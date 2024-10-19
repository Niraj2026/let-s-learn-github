//linear search
#include <iostream>
using namespace std;

//function to perform the linearSearch 
int linearSearch(int arr[], int n, int key) {
    for (int i=0; i<n; i++) {
        if (arr[i]==key) {
            return i;
        }
    }
    return -1;
}

int main() {

    //to take size of an array 
    int n;
    cout <<"Enter the size of array: ";
    cin >>n;

    //to enter the elements in the array
    int arr[n];
    cout <<"Enter the elements in the array: "<<endl;
    for (int i=0; i<n; i++) {
        cin >>arr[i];
    }

    //to get the element which is to be searched
    int key;
    cout <<"Enter the element to be searched: ";
    cin >>key;
    
    //to print the element found by performing linear search
    cout <<"Element is found at " <<linearSearch(arr, n, key)<<" position"<<endl;
    return 0;
}    