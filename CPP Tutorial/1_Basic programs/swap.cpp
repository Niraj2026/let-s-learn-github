//This programs helps to swap two numbers.

#include <iostream>
using namespace std;

int main () {
    int a,b;
    cout <<"Before swapping: " <<endl;
    cout <<"Enter a= ";
    cin >> a;

    cout << "Enter b= ";
    cin >> b;

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout <<"\nAfter swapping: \n" << "a= " << a <<endl << "b= " << b ; ;

    return 0;
}