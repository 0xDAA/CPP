#include <iostream>
using namespace std; 

int readNumber(){
    int number;
    cout<<"Enter The number : ";
    cin>>number;
    return number;
}

void checkingOddOrEven(int num){
    if (num %2 ==0){
        cout<<num<< " is Even";
    } else {
        cout<<num << " is Odd";
    }
}

int main(){
    checkingOddOrEven(readNumber());
    return 0;
}