//to check whether the triangle is scalene, isosceles, equilateral.
#include <iostream>
using namespace std;

int main () 
{
    int sideA, sideB, sideC;
    cout <<"Enter sides of triangle: ";
    cin >> sideA >> sideB >> sideC;
    

    if (sideA == sideB && sideB == sideC && sideC == sideA)
    {
        cout <<"The triangle is equilateral.";
    }
    else if (sideA==sideB || sideB==sideC || sideC==sideA)
    {
        cout <<"The traingle is isosceles.";
    }
    else 
    {
        cout <<"The traingle is scalene.";
    }
    return 0;
}