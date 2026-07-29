#include <iostream>
using namespace std; 

enum enNumberType {Odd=1,Even=2};

int readNumber(){
    int userInput;
    cout<<"Enter a number: ";
    cin>>userInput;
    return userInput;
}

enNumberType checkNumber(int num){
    if (num %2 == 0){
        return enNumberType::Even;
    } else{
        return enNumberType::Odd;
    }
}

void PrintNumberType(enNumberType Type){
    if (Type==enNumberType::Even){
        cout<<"Your Number is even";
    } else {
        cout<<"Your number is odd";
    }
}

int main(){
    PrintNumberType(checkNumber(readNumber()));
    return 0;
}