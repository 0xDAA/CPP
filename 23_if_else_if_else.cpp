#include <iostream>
using namespace std;

/*
    If Condition Else If Else
    Syntax

    if (condition is true){
        // Do Something
    } else if (another condition if first condition not true){
        // Do Something 
    } else {
        // Do something if all conditions are false
    }
*/

int main(){
    int age = 18;
    if (age >= 18){
        cout<<"Welcome"<<endl;
    } else if (age >= 14) {
        cout<<"This Content not for teenagers";
    } else {
        cout<<"This Content not for babies";
    }
    cout<<"See You";
    return 0;
}