#include<iostream>
#include <vector>
using namespace std;

struct stEmployee{
    string firstName,lastName;
    int salary;
};

void addEmployee(vector<stEmployee> &vEmp){
    stEmployee temp;
    char askUser;
    int id=1;
    do{
        cout<<"Enter employee first name ["<<id<<"] : ";
        cin>>temp.firstName;
        cout<<"Enter employee last name ["<<id<<"] : ";
        cin>>temp.firstName;
        cout<<"Enter employee salary ["<<id<<"] : ";
        cin>>temp.salary;
        vEmp.push_back(temp);
        id++;
        cout<<"Do you want add more employee? (y/n) : ";
        cin>>askUser;
    } while (askUser == 'y' || askUser == 'Y');
}

void printEmployee(vector <stEmployee> &vEmp){
    for(stEmployee &employee:vEmp){
        cout<<"-----------------------"<<endl;
        cout<<"First name : "<<employee.firstName<<endl;
        cout<<"Last name : "<<employee.lastName<<endl;
        cout<<"Salary : "<<employee.salary<<endl;
        cout<<"-----------------------"<<endl;
    }
}

int main() {
    vector <stEmployee> vEmployee;
    addEmployee(vEmployee);
    printEmployee(vEmployee);
    return 0;

}

