//program to check the given number is even or odd.

#include <iostream>
using namespace std;

int main () {
    int n;
    cout <<"Enter number: ";
    cin >> n;

    if(n%2==0) {
        cout<<"The number " <<n<< " is even.";
    }
    else {
        cout <<"The number " <<n<< " is odd.";
    }
    return 0;
}