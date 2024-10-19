//program to write a simple calculator using switch statement.
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout <<"Enter the two numbers: "<<endl;
    cin >>num1>>num2;

    char c;
    cout <<"Enter the operand: ";
    cin >>c;

    switch (c) {
        case '+': cout <<num1+num2<<endl;
        break;
        case '-': cout <<num1-num2<<endl;
        break;
        case '*': cout <<num1*num2<<endl;
        break;
        case '/': cout <<num1/num2<<endl;
        break;
        default: cout <<"Enter valid operand!" <<endl;
        break;

    }
    return 0;
}