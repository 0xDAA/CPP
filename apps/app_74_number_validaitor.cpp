#include <iostream>
using namespace std;
void validationNumber(){
    int userNumber;
    cout<<"Enter Positive Number: ";
    cin>> userNumber;
    while(userNumber<0){
        cout<<"Enter Positive Number : ";
        cin>> userNumber;
    }
    cout<<"Number Entered: "<<userNumber;
}
int main(){
    validationNumber();
    return 0;
}