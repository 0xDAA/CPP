#include <iostream>
using namespace std;

enum enPerfectNumber {Perfect=1,NotPerfect=2};

int readPositiveNumber(){
    int number;
    do {
        cout<<"Enter a positive number: ";
        cin>>number;
    }while (number <0);
    return number;
}

enPerfectNumber perfectChecker(int num){
    int total=0;
    for (int i=1;i<num;i++){
        if(num % i == 0){
            total +=i;
        }
    }
    if(total == num){
        return enPerfectNumber::Perfect;
    } else{
        return enPerfectNumber::NotPerfect;
    }
}

void PrintResult(int number){
    if(perfectChecker(number) == enPerfectNumber::Perfect){
        cout<<"Number "<<number<<" is Perfect!";
    } else {
        cout<<"Number "<<number<<" is not perfect";

    }
}

int main(){
    PrintResult(readPositiveNumber());
    return 0;
}