#include <iostream>
using namespace std;

/*
    Assignment operators
    "For Assigning Operations"

    --- = => Assign
    --- += => Addition
    --- -= => Subtraction
    --- *= => Multiplication
    --- /= => Division
    --- %= => Modulo => Remainder After Division
    */

int main(){
    int number;
    
    number = 10; // Assign 10 to variable called "number"
    cout<<number<<endl;

    number +=10; // Adding 10 to variable number (10+10)
    cout<<number<<endl;

    number -=5; // 20-5 = 15
    cout<<number<<endl;

    number /=3; // Divide 15 by 3
    cout<<number<<endl; // 5

    number *=2; 
    cout<<number<<endl;

    number %=2;
    cout<<number<<endl;
    return 0;
}