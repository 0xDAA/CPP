#include <iostream>

using namespace std;

/*
    bool => Boolean
    --- Only Two Possible Values [true,false]
    --- Value Is Case Sensitive
    --- 1 Byte size in memory
*/

int main() {
    bool isOpen = false;
    cout << isOpen +10 <<endl; // 0 + 10 = 10;
    cout << true+true+false<<endl; // 1 + 1 + 0 = 2
    
    bool testOne = 10>5 ;// Yes => true => 1
    bool testTwo = 3>5 ;// No => false => 0

    cout << testOne << endl; // 1
    cout << testTwo << endl; // 0

    cout << sizeof(isOpen)<< endl; // 1 Byte
    return 0;
}
