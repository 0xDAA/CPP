#include <iostream>
using namespace std;

enum enNumberType{Odd=1,Even=2};

int readNumber(){
    cout<<"Enter Integer Number: ";
    int read;
    cin>>read;
    return read;
}

enNumberType numberChecker (int nim){
    if (nim %2 ==0)
        return enNumberType::Even;
    else 
        return enNumberType::Odd;
}

void printResult(enNumberType type){
    if(type == enNumberType::Even){
        cout<<"Number is Even";
    } else {
        cout<<"Number is odd";
    }
}

int main(){;

    printResult(numberChecker(readNumber()));
    return 0;
}