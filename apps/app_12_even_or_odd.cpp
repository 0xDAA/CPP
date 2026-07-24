#include <iostream>
using namespace std;

string evenOrOdd(int number){
    if(number % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main(){
    cout<<evenOrOdd(2)<<endl; // Even
    cout<<evenOrOdd(3)<<endl; //Odd
    cout<<evenOrOdd(4)<<endl; // Even
    cout<<evenOrOdd(7)<<endl; // Odd
}