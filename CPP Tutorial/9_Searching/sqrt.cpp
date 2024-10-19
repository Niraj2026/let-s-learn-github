//program to print the square root of given number.
#include <iostream>
using namespace std;

int binarySearch(int n) {
    int s = 0;
    int e = n;
    int mid;
    int ans = -1;

    while (s <= e) {
        mid = s + (e - s) / 2;
        int square = mid * mid;

        if (square == n) {
            return mid;
        } 
        else if (square < n) {
            ans = mid;
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number to find the square root: ";
    cin >> n;

    int result = binarySearch(n);
    cout << "The square root of " << n << " is " << result << endl;
    return 0;
}
