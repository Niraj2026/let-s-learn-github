//program to print the sum of only positive number.
#include <iostream>
using namespace std;
 
int main  () {
    int number;
    cout <<"Enter the number: ";
    cin >>number;

    int sum=0;
    while (number >= 0) {
        sum=sum+number;
        cout<<"Enter number to sum: ";
        cin >>number;              
    }
    
    cout <<"The sum is:" << sum;
    return 0;
} 