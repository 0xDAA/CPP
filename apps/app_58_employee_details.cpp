#include <iostream>
using namespace std;

struct personInfo {
    string name;
    int age;
    char gender;
    bool isMarried;
};

struct addressInfo {
    string city;
    string country;
    string PoBOX;
    int ZIPCODE;
};

struct salaryInfo{
    float monthlySalary;
};

struct employee {
    personInfo personInfo;
    addressInfo address;
    salaryInfo salary;
};

void readData (employee &info){
    cout<<"Enter your name : ";
    cin>>info.personInfo.name;
    cout<<"Enter your age : ";
    cin>>info.personInfo.age;
    cout<<"Enter you gender (M/F) : ";
    cin>>info.personInfo.gender;
    cout<<"Are you married? (1/0) : ";
    cin>>info.personInfo.isMarried;
    cout<<"Enter your country : ";
    cin>>info.address.country;
    cout<<"Enter your city: ";
    cin>>info.address.city;
    cout<<"Enter your PoBOX: ";
    cin>>info.address.PoBOX;
    cout<<"Enter your zipCode : ";
    cin>>info.address.ZIPCODE;
    cout<<"Enter your monthly salary : ";
    cin>>info.salary.monthlySalary;
}

void printData (employee info) {
    cout<<"===================================\n";
    cout<<"Name : "<<info.personInfo.name<<endl;
    cout<<"Age : "<<info.personInfo.age<<endl;
    cout<<"Gender : "<<info.personInfo.gender<<endl;
    cout<<"is married? : "<<info.personInfo.isMarried<<endl;
    cout<<"Country : "<<info.address.country<<endl;
    cout<<"City : "<<info.address.city<<endl;
    cout<<"ZipCode : "<<info.address.ZIPCODE<<endl;
    cout<<"PoBOX : "<<info.address.PoBOX<<endl;
    cout<<"Salary : "<<info.salary.monthlySalary<<endl;
    cout<<"===================================\n";

}
int main(){
    employee employee1Info;
    readData(employee1Info);
    printData(employee1Info);
    return 0;
}