#include <iostream>
using namespace std;

/*
    Constant Variable
    --- Read Only Value
    --- Can't Declare Without Value
*/

int main(){
    const float pi= 3.14;
    // const int safePinCode; Error (Can't Declare Without Value)
    // pi = 14.3 ; Error (Can't Update constant variable)
    cout <<pi; // Output of pi
    return 0;
}