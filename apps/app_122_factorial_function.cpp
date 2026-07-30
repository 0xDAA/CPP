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

void factorialCalc(int num){
    int f=1;
    for (int i=1;i <=num;i++){
        f *=i;
        
    }
    cout<<"Factorial is : "<<f;
}



int main(){
    int N = readNumber();
    factorialCalc(N);
    return 0;
}