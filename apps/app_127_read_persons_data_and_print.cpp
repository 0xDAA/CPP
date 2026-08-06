#include <iostream>
using namespace std;

struct stPerson{
    string firstName,lastName,phone;
    int age;
};

void readPerson(stPerson &Person){
    cout<<"Enter first name : ";
    cin>>Person.firstName;
    cout<<"Enter last name : ";
    cin>>Person.lastName;
    cout<<"Enter Phone  : ";
    cin>>Person.phone;
    cout<<"Enter age : ";
    cin>>Person.age;
}

void readPersons(stPerson Persons[5]){
    for (int i = 0 ;i<5;i++){
        readPerson(Persons[i]);
    }
}

void printPerson(stPerson Person){
    cout<<"====================="<<endl;
    cout<<"Firstname : "<<Person.firstName<<endl;
    cout<<"last Name : "<<Person.lastName<<endl;
    cout<<"phone : "<<Person.phone<<endl;
    cout<<"age : "<<Person.age<<endl;
    cout<<"====================="<<endl;
}

void printPersons(stPerson Persons[5]){
    for (int i = 0 ; i < 5 ; i++){
        printPerson(Persons[i]);
    }
}

int main()
{
    stPerson dataPersons[5];
    readPersons(dataPersons);
    printPersons(dataPersons);
    return 0;
}