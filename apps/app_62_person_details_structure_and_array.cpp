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

void readtwoPersons(stPersonInfo person[2]){
    readPersonInfo(person[0]);
    readPersonInfo(person[1]);
}
void printTwoPersons(stPersonInfo person[2]){
    printPersonInfo(person[0]);
    printPersonInfo(person[1]);
}
int main(){
    stPersonInfo person[2];
    readtwoPersons(person);
    printTwoPersons(person);
    return 0;
}