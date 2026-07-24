#include <iostream>
using namespace std;

struct stPersonInfo{
    string firstName;
    string lastName;
    int age;
    string phoneNumber;
};
void readPersonInfo(stPersonInfo &person){
    cout<<"Enter First Name: ";
    cin>>person.firstName;
    cout<<"Enter Last Name: ";
    cin>>person.lastName;
    cout<<"Enter Age: ";
    cin>>person.age;
    cout<<"Enter Phone Number: ";
    cin>>person.phoneNumber;
}
void printPersonInfo(stPersonInfo person){
    cout<<"******************************\n";
    cout<<"First Name : "<<person.firstName<<endl;
    cout<<"Last Name : "<<person.lastName<<endl;
    cout<<"Age : "<<person.age<<endl;
    cout<<"Phone Number : "<<person.phoneNumber<<endl;
    cout<<"******************************\n";

}

void readtwoPersons(stPersonInfo person[100],int &Length){
    cout<<"Please Enter number of persons from 1 to 100 : ";
    cin>>Length;
    for (int i =0 ;i <= Length-1; i++){
    readPersonInfo(person[i]);
    }

}
void printTwoPersons(stPersonInfo person[100],int Length){
    for (int i = 0; i<= Length-1;i++) {
    printPersonInfo(person[i]);
    }
}
int main(){
    stPersonInfo person[100];
    int Length;
    readtwoPersons(person,Length);
    printTwoPersons(person,Length);
    return 0;
}