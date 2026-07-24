#include <iostream>
using namespace std;
/*
    Escape Sequences Character
    - \n
    - \\
    - \"
    - \'
    - \t (Tab)
    - \b (Backspace)
    - \a (Alert)
    - \r (Carriage Return)
*/
int main(){
    cout<<"New Line : \n";
    cout<<"Print backslash: \\ \n";
    cout<<"Hello Mr \"Ahmed\" \n";
    cout<<"Quote of the Day: \'Fight until you win\' \n";
    cout<<"Tab Between A\tz \n";
    cout<<"Delete last letter\b \n";
    cout<<"Run an alert\a \n";
    cout<<"Hello\rWorld\n"; // World will override Hello
    return 0;
}