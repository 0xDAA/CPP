#include <iostream>
using namespace std;

enum enDepartment {IT=1,HR,Sales,Finance,Marketing};
enum enEmployeeStatus {Remote=1,Hybrid,OnSite};

int UID=0;

struct stEmployee{
    string name;
    int id,age;
    enDepartment dept;
    enEmployeeStatus status;
    float baseSalary;
};

void addEmployee(stEmployee emp[100]){
    int choice;
    cout<<"Enter Employee Name: ";
    getline(cin,emp[::UID].name);
    emp[::UID].id=::UID;
    cout<<"Enter age of employee : ";
    cin>>emp[::UID].age;
    cout<<"Enter base salary of employee : ";
    cin>>emp[::UID].baseSalary;
    cout<<"Department of user : "<<endl;
    cout<<"[1] - IT"<<endl;
    cout<<"[2] - HR"<<endl;
    cout<<"[3] - Sales"<<endl;
    cout<<"[4] - Finance"<<endl;
    cout<<"[5] - Marketing"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    emp[::UID].dept = (enDepartment) choice; 
    cout<<"Status of user : "<<endl;
    cout<<"[1] - Remote"<<endl;
    cout<<"[2] - Hybrid"<<endl;
    cout<<"[3] - On-Site"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    emp[::UID].status = (enEmployeeStatus) choice; 
    ::UID++;
}

void displayEmployee(int eUID,stEmployee emp[100]){
    cout<<"UID: "<<emp[eUID].id<<endl;
    cout<<"Full Name: "<<emp[eUID].name<<endl;
    cout<<"Age: "<<emp[eUID].age<<endl;
    cout<<"Base Salary: "<<emp[eUID].baseSalary<<endl;

}

int main()
{
    stEmployee employees[100];
    addEmployee(employees);
    displayEmployee(0,employees);

    return 0;
}