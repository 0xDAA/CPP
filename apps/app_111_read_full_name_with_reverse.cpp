#include <iostream>
using namespace std;

struct stPersonInfo{
    string firstName;
    string lastName;
};

stPersonInfo readInfo(){
    stPersonInfo person;
    cout<<"Enter First Name:";
    cin>>person.firstName;
    cout<<"Enter last Name:";
    cin>>person.lastName;
    return person;
}

string concatPersonName(stPersonInfo Person,bool reversed){
    if (reversed == 1){
        return Person.lastName+" "+Person.firstName;
    } else {
        return Person.firstName+" "+Person.lastName;
    }
}

void printResult(string fullName){
    cout<<"Full name is : "<<fullName;
}

int main(){
    printResult(concatPersonName(readInfo(),1));
    return 0;
}