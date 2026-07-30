#include <iostream>
using namespace std;

int readAge(){
    int age;
    cout<<"Please enter your age: ";
    cin>>age;
    return age;
}

bool ageValidator(int age,int from,int to){
    return (age>=from && age <=to);
}

void printResult(int age){
    if(ageValidator(age,18,45))
        cout<<"Valid Age!";
    else
        cout<<"Invalid Age!";
}

int main(){
    printResult(readAge());
    return 0;
}