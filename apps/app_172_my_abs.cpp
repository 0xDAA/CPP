#include <iostream>
using namespace std;

float readNumber(){
    float num;
    cout<<"Enter a number : ";
    cin>>num;
    return num;
}

float myABS (float number){
    if (number>=0){
        return number;
    } else {
        return number * -1;
    }
}


int main(){

    cout << myABS(-10)<<endl;
    cout << myABS(-17)<<endl;
    cout << myABS(17)<<endl;
    cout << myABS(0)<<endl;
    cout << myABS(readNumber())<<endl;

}