//binary search
#include <iostream>
using namespace std;

//function to perform binary search 
int binarySearch(int arr[], int n, int key) {
    int start=0;
    int end=n;

    while (start<=end) {
        int mid =(start+end)/2;

        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
}

    int main() {
    int n;
    cout <<"Enter the size of array: ";
    cin >>n;

    int arr[n];
    cout <<"Enter the "<<n<<" elements in the array: " <<endl;
    for (int i=0; i<n; i++) {
        cin >>arr[i];
    }
    int key;
    cout <<"Enter the element to be searched: ";
    cin >>key;

    cout <<"Element is found at " <<binarySearch(arr, n, key)<<" position"<<endl;
    return 0;
}