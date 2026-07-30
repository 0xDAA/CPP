#include <iostream>
using namespace std;

struct nums{
    int n1,n2;
};

nums readNumbers(){
    nums numbers;
    cout<<"Enter Number 1 : ";
    cin>>numbers.n1;
    cout<<"Enter Number 2 : ";
    cin>>numbers.n2;
    return numbers;
}

int checkingMaxNumber(nums num){
    if (num.n1 > num.n2)
        return num.n1;
    else 
        return num.n2;
}

void printResult(nums numbers){
    cout<<"Number 1 is : "<<numbers.n1<<endl;
    cout<<"Number 2 is : "<<numbers.n2<<endl;
    cout<<"Max Number is : "<<checkingMaxNumber(numbers);
}

int main(){
    printResult(readNumbers());
    return 0;
}