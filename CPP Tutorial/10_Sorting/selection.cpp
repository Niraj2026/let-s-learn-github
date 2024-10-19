//selection sort program to sort the array.
#include <iostream>
using namespace std;

//function to perform the selection sort
void selectionSort(int arr[], int n) {
    for (int i=0; i<n-1; i++){
        int minIndex=i;

        for(int j=i+1; j<n; j++) {
            if (arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex], arr[i]);
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
    
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}