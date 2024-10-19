//basic use of input and performing to find area and circumference of circle.

#include <iostream> 
using namespace std;

int main() {
    auto rad=1;
    float area,circumference;

    //cout <<"Enter radius of circle: "<<endl;
    //cin >> rad;

    area=3.14*rad*rad;
    cout <<"The area of circle is: "<< area <<endl;

    circumference=2*3.14*rad;
    cout <<"The circumference of circle is: "<< circumference <<endl;

    return 0;

}