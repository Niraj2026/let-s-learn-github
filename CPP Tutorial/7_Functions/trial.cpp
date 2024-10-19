//for practise only :))
//factorial number program

#include <iostream>
using namespace std;

int fact(int n) {
    int factorial=1;
    for(int i=2; i<=n; i++) {
        factorial=factorial*i;
    }
    return factorial;
}

int main() {
    int n;
    cout <<"enter the number: ";
    cin >>n;

    int ans=fact(n);
    cout <<"Factorial of "<<n<<": "<<ans <<endl;
    return 0;
}