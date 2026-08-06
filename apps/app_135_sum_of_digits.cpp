#include <iostream>
#include <string>
using namespace std;

string readNumber(){
    cout<<"Enter a number to reverse : ";
    string number;
    cin>>number;
    return number;
}

int sumNumbersDigits(string myNum){
    int total = 0;
    for (int i = myNum.length() - 1; i >= 0; i--){
        total += myNum[i] - '0';
    }
    return total;
}

int main(){
    int x= sumNumbersDigits(readNumber());
    cout<<x;
    return 0;
}