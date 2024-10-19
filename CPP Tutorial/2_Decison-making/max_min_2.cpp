//program to print the maximum or minimum number across two numbers.
#include <iostream>
using namespace std;

int main () {
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    int maximum, minimum;
    if(x>y) {
        maximum=x;
        minimum=y;
    }
    else {
        maximum=y;
        minimum=x;
    }
    cout <<"Maximum= " <<maximum<<endl;
    cout <<"Minimum= " <<minimum<<endl;

    return 0;
}