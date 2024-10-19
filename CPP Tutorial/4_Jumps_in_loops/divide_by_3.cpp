//program to print the numbers which are not divisble by 3 from 1 to 100 numbers.
#include <iostream>
using namespace std;

int main() {
    for(int i=1;i<=100;i++) {
        if(i%3==0) {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}