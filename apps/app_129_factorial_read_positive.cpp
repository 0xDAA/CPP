#include <iostream>
using namespace std;

int readPositive(){
    int number;
    do{
        cout<<"Enter a positive number";
        cin>>number;
    } while(number<0);
    return number;
}
int factorial(int n){
    int fact=1;
    for(int i =1; i<=n;i++){
        fact *=i;
    }
    return fact;
}
void printFactorial(int fact){
    cout<<"Factorial is : "<<fact;
}
int main(){
    printFactorial(factorial(readPositive()));
    return 0;
}