//to swap the alternate element in the array.
#include <iostream>
using namespace std;

//function to swap the alternate elements in array
void swapAlternate(int arr[], int n){
        for(int i=0; i<n; i+=2) {
            if(i+1<n) {
                swap(arr[i], arr[i+1]);
            }
        }
        cout<<"After alternate swap of elements:"<<endl;   
        
}

//function to print the array
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
        cout <<endl;
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

    swapAlternate(arr, n);
    printArray(arr, n);
    return 0;
}