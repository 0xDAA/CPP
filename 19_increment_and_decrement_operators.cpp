#include <iostream>
using namespace std;

/*
    Increment and Decrement Operators
    [Variable]++;

    [Variable]--;

    ++[Variable];

    --[Variable];
*/

int main(){
    int likes=0;
    cout<<likes++<<endl;// Print likes then increase
    cout<<++likes<<endl;// increase likes then Print
    
    // Same Thing With Decreament
    cout<<--likes<<endl;// decrease likes then Print
    cout<<likes--<<endl;// Print likes then decrease
    
    
    return 0;
}