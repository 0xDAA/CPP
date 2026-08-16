#include<iostream>
#include <vector>
using namespace std;

struct stEmployee{
    string firstName,lastName;
    int salary;
};


int main() {
    vector <stEmployee> vEmployee;
    stEmployee tempStEmployee;
    
    // Employee1:
    tempStEmployee.firstName="Ahmed";
    tempStEmployee.lastName="Abdelhalim";
    tempStEmployee.salary=17500;
    vEmployee.push_back(tempStEmployee);
    
    tempStEmployee.firstName="Derragui";
    tempStEmployee.lastName="Ahmed";
    tempStEmployee.salary=6000;
    vEmployee.push_back(tempStEmployee);

    tempStEmployee.firstName="Mohammed";
    tempStEmployee.lastName="Minecraft";
    tempStEmployee.salary=1740;
    vEmployee.push_back(tempStEmployee);

    for (stEmployee emp:vEmployee){
        cout<<endl;
        cout<<"First Name: " << emp.firstName <<endl;
        cout<<"Last Name: " << emp.lastName <<endl;
        cout<<"Salary : " << emp.salary <<endl;
        cout<<endl;
    }
    return 0;

}

