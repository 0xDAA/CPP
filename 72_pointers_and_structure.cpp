#include<iostream>
using namespace std;

struct stEmployee{
    string name;
    int salary;
};

int main() {
    stEmployee Employee1,*ptr;
    Employee1.name="Ahmed";
    Employee1.salary=5000;
    ptr=&Employee1;
    //Output of Employee1:
    cout<<"Name : "<<Employee1.name<<endl;
    cout<<"Salary : "<<Employee1.salary<<endl;

    //Output by using pointer:
    cout<<"Name : "<<ptr->name<<endl;
    cout<<"Salary : "<<ptr->salary<<endl;
}

