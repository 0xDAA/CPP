#include <iostream>
using namespace std;

/*
    Logical Operators

    && And
    || Or
    ! Not
*/

int main(){
    int age=21,points=1475;

    cout<<(age >=18 && points >= 500)<<endl; // True (age is greater than 18) and (points is greater than 500)
    
    cout<<!(age >=18 && points >= 500)<<endl; // False because !
    
    cout<<(age >=18 || points >= 2500)<<endl; // True (age is greater than 18) or (points is not true but optional)

    return 0;
}