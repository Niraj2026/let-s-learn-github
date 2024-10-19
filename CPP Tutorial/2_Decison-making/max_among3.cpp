//program to print the maximum number across three numbers.
#include <iostream>
using namespace std;

int main () {
    int x,y,z;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;

    int maximum;
    
    if(x>y) {
        if(x>z) {
            cout <<"Maximum= " <<x;
        }
        else {
            cout <<"Maximum= " <<z;
        }
    }
    else {
        if(y>z) {
            cout <<"Maximum= " <<y;
        }
        else {
            cout <<"Maximum= " <<z;
        }
    }
    return 0;
    }