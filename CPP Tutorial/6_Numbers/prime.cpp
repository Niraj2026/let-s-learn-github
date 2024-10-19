//program to check whether the number is prime or not.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout <<"Enter the number: ";
    cin >>n;

    bool flag=true;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) {
            flag=false;
            break;
        }
    }
    if (n<=1) {
        flag= false;
    }
    if (flag) {
        cout <<"Prime number" <<endl;
    }
    else {
        cout <<"Not prime number" <<endl;
    }
    return 0;
}