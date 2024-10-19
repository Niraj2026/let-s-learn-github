//program to print the factorial of n given number using recursion.

#include <iostream>
using namespace std;

int factorial(int n) {

    //base case (to stop the program there!)
    if (n==0)
    return 1;

    /*
    int smallerProblem=factorial(n-1);
    int biggerProblem=n*smallerProblem;         
    return biggerProblem;
    */

    return n*factorial(n-1);
}

int main() {
    int n;
    cout <<"Enter the number:";
    cin >>n;

    int ans=factorial(n);
    cout << "The factorial of "<<n<< " is " <<ans <<endl;
    return 0;
}