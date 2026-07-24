#include <iostream>
using namespace std;

struct strInfo{
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readInfo(strInfo &info){
    cout<<"Enter your firstname:\n";
    cin>> info.firstName;
    cout<<"Enter your lastname:\n";
    cin>> info.lastName;
    cout<<"Enter your age:\n";
    cin>> info.age;
    cout<<"Enter your phone:\n";
    cin>> info.phone;
}

void printInfo(strInfo info){
    cout<<"==================================="<<endl;
    cout<<"First Name : " <<info.firstName<<endl;
    cout<<"Last Name : " <<info.lastName<<endl;
    cout<<"Age : " <<info.age<<endl;
    cout<<"Phone : " <<info.phone<<endl;
    cout<<"==================================="<<endl;
}

int main(){
    strInfo Person1Info;
    readInfo(Person1Info);
    printInfo(Person1Info);

    // Second Record
    strInfo Person2Info;
    readInfo(Person2Info);
    printInfo(Person2Info);
    return 0;
}