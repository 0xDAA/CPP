#include <iostream>

using namespace std;

/*
    float => Floating point number
    --- Store 4 Bytes in memory
    --- 7 Decimal Precision

    double => Double the Float
    --- Store 8 Bytes in memory
    --- 15 Decimal Precision

*/

int main() {
    double dob = 10;
    dob = 20.5;
    cout<<sizeof(dob) << endl;
    cout << dob << endl;

    float fl = 10.5f + 9.5f;
    cout << sizeof(fl) <<endl;
    cout << fl << endl;
    return 0;
}
