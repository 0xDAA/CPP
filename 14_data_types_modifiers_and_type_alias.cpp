#include <iostream>

using namespace std;

int main() {
    int age = 100;
    cout << sizeof(age) << endl; // 4 Bytes

    short int agex = 100;
    cout << sizeof(agex) << endl; // 2 Bytes After Using (short)

    cout << sizeof(short int)<< endl; // 2 Bytes
    cout << sizeof(long int)<< endl; // 4 Bytes
    cout << sizeof(long long int)<< endl; // 8 Bytes
    
    signed int ageOne = 77 ; // Signed (Store Positive and Negatiive and 0)
    unsigned int ageTwo = 77 ; // unsigned (Store Positive Only)

    long long int bigData = 10001000100010001;
    
    using bigInt = long long int; // Type Alias Style 1
    bigInt test = 10000000000;
    return 0;

    typedef unsigned long UL; // Type Alias Style 2
    UL myLongNum = 444444444444;
}
