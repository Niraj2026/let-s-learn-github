//program to print the maximum and minimum element.
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout <<"Enter the size of array: ";
    cin >>n;

    int arr[n];
    for (int i=0;i<n;i++) {
        cout << "Enter the array upto given size: ";
        cin >>arr[i];
    }

    int maxNo= INT_MIN;
    int minNo=INT_MAX;

    for (int i=0; i<n; i++) {
        if(arr[i]>maxNo) {
            maxNo=arr[i];
        }
        if (arr[i]<minNo) {
            minNo=arr[i];
        }
    }
    cout <<"maximum element: "<<maxNo<<endl<<"minimum element: "<<minNo<<endl;
    return 0;
}