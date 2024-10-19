//program to print the sum of N natural number.
#include <iostream>
using namespace std;

int main () {
    int n;
    cout <<"Enter the N natural number: ";
    cin >> n;

    int sum=0;
    for(int i=1;i<=n;i++) {
        sum=sum+i;
    }
    cout <<"The sum of " <<n<< " natural number is: " <<sum <<endl;
    return 0;
}
