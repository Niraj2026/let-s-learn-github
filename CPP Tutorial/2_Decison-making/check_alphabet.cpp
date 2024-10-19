//program to check whether the alphabet is vowel or consonant.
#include <iostream>
using namespace std;

int main () {
    char c ;
    int isLowercaseVowel, isUppercasevowel;

    cout <<"Enter alphabet: ";
    cin >>c;

    isLowercaseVowel = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isUppercasevowel = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(isLowercaseVowel || isUppercasevowel)
    {
        cout <<"The alphabet is vowel.";
    }
    else 
    {
        cout <<"The alphabet is consonant.";
    }
    return 0;

}
