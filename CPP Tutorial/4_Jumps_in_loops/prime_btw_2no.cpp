//to print prime number between given two numbers.
#include <iostream>
using namespace std;
int main () {
    int i,j;
    bool isPrime;
    for (i=1; i<= 50; i++) {
        if (i==1 || i==0) 
        continue;

        isPrime = true;
        for(j=2; j<=i-1; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i<<endl;
    }
    return 0;
    
}