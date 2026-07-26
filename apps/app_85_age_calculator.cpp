#include <iostream>
using namespace std;

int ageCalculator(int currentYear,int userBirthYear){
    return currentYear - userBirthYear;
}

int main(){
    int userInput;
    cout<<"Enter your birth year : ";
    cin>>userInput;
    cout<<"Your Age Is : "<<ageCalculator(2026,userInput);
    return 0;
}