#include <iostream>
using namespace std;

/*
    Comparison Operators

    == Equal
    != Not Equal
    > Greater than
    < Less than
    >= Greater than or Equal
    <= Less than or Equal
*/

int main(){
    int a,b;
    a = 10;
    b = 20;

    cout<< (a == b) <<endl; // False a not equal to b

    cout<< (a != b) <<endl; // True a not equal to b
    
    cout<< (a > b) <<endl; // False a is less than b
    
    cout<< (a < b) <<endl; // True b is greater than a
    
    cout<< (a >= b) <<endl; // False
    
    cout<< (a <= b) <<endl; // True
    return 0;
}