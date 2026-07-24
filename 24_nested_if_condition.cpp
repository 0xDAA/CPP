#include <iostream>
using namespace std;

/*
    Nested If Condition
    Syntax

    if (condition is true){
        if (another condition is true) {
        // Do Something
        }
    }
*/

int main(){
    int age = 18,points= 504;
    if (age >= 18){
        if( points >= 500){
            cout<<"Welcome"<<endl;
        } else {
            cout<<"Please collect points and try again!";
        }
    }
    cout<<"See You";
    return 0;
}