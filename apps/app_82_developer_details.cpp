#include <iostream>
using namespace std;

struct contactInfo{
    string github;
    string linkedinUrl;
    string phone;
};

struct personalInfo{
    contactInfo contacts;
    string FullName;
    string country;
    string city;
    char gender;
    int yearOfBirth;
};

struct developerInfo{
    personalInfo personInfo;
    string devRole;
    float devSalary;
};

void printDeveloperDetails(developerInfo _developer){
    cout<<"Full Name : "<<_developer.personInfo.FullName <<endl;
    cout<<"Country : "<<_developer.personInfo.country <<endl;
    cout<<"City : "<<_developer.personInfo.city <<endl;
    cout<<"Age : "<<2026-_developer.personInfo.yearOfBirth <<endl;
    cout<<"Gender : "<<_developer.personInfo.gender <<endl;
    cout<<"Role : "<<_developer.devRole <<endl;
    cout<<"Salary : "<<_developer.devSalary <<endl;
    cout<<"Github : "<<_developer.personInfo.contacts.github <<endl;
    cout<<"Phone : "<<_developer.personInfo.contacts.phone <<endl;
}

int main(){
    developerInfo DAA;
    DAA.devRole="Software Engineer";
    DAA.devSalary=170000;
    DAA.personInfo.city="Algeria";
    DAA.personInfo.country="Algeria";
    DAA.personInfo.FullName="DERRAGUI ABDELHALIM AHMED";
    DAA.personInfo.gender='M';
    DAA.personInfo.yearOfBirth=1999;
    DAA.personInfo.contacts.github="0xDAA";
    DAA.personInfo.contacts.linkedinUrl="https://www.linkedin.com/in/derragui-abdelhalim-ahmed";
    DAA.personInfo.contacts.phone = "+213777777";
    
    printDeveloperDetails(DAA);
    
    return 0;
}