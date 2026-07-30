#include <iostream>
using namespace std;

int readNumber(){
    int number;
    do {
        cout<<"Enter a valid number : ";
        cin>>number;
    } while(number <0);
    return number;
}

void powerOf234(int number){
    cout<<number<<"^2 = "<<number*number<<endl;
    cout<<number<<"^3 = "<<number*number*number<<endl;
    cout<<number<<"^4 = "<<number*number*number*number<<endl;
}



int main(){
    powerOf234(readNumber());
    return 0;
}