//program to print whether the given number is prime or not .
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num <= 1) {
        cout << "Non prime number" << endl;
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << "Non prime number" << endl;
            return 0;
        }
    }

    cout << "Prime number" << endl;
    return 0;
}
