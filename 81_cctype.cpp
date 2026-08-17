#include<iostream>
#include <cctype>
using namespace std;


int main() {
    char a,B;
    a = toupper('a');
    B = tolower('B');

    cout<<"Convertiong a To A: "<<a<<endl;
    cout<<"Convertiong B To b: "<<B<<endl;

    cout<<"Is A Upper ?: (1/0): "<<isupper('A')<<endl;
    cout<<"Is A Lower ?: (1/0): "<<islower('A')<<endl;
    
    cout<<"Is 9 Digit?: (1/0) : "<<isdigit('9')<<endl;

    cout<<"Is $ Punctuation (&$-_$%...)?: (true (any number)/0) : "<<ispunct('$')<<endl;
    return 0;
}

