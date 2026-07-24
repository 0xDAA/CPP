#include <iostream>

using namespace std;

/*
    int => Integer
    Store From -2147483648 to 2147483647
    Size in memory => 4
*/

int main() {
    int numOne = 100;
    int numTwo = -500;
    int numThree = 0;
    int numFour= true; // Will Store Number 1
    // int numFive = "0xDAA" // Error Can't Store String value
    
    cout<< sizeof(int); // 4 Bytes

    cout << numOne << endl;     // Output of numOne
    cout << numTwo << endl;     // Output of numTwo
    cout << numThree << endl;   // Output of numThree
    cout << numFour << endl;    // Output of numFour

    cout<< INT_MAX << endl; // Max Value of Integer
    cout<< INT_MIN << endl; // Min Value of Integer
}
