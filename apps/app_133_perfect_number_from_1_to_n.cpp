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

void PrintPerfect(int number){
    if(perfectChecker(number) == enPerfectNumber::Perfect){
        cout<<"Number "<<number<<" is Perfect!"<<endl;
    }
}

void PerfectNumbers(int num){
    for (int i=1; i <= num;i++){
        PrintPerfect(i);
    }
}

int main(){
    PerfectNumbers(readPositiveNumber());
    return 0;
}