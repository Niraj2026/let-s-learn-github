//bubble sort program to sort the array.
#include <iostream>
using namespace std;

//function to perform the bubble sort
void bubbleSort(int arr[], int n) {
    for (int i=1; i<n; i++) {
        for (int j=0; j<n; j++) {
            if(arr[j] >arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

//function to print the array
void printArray(int arr[],  int n){
    for (int i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;
}

int main() {
    int n;
    cout <<"Enter the size of array: ";
    cin >>n;

    //to enter the elements of the array
    int arr[n];
    cout <<"Enter the "<<n<<" elements in the array: "<<endl;
    for (int i=0; i<n; i++) {
        cin >>arr[i];
    }
    
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}