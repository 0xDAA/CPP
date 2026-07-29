#include <iostream>
using namespace std; 

struct stAddress{
    string Street;
    string Country;
    string City;
    int ZIPCODE;
    int PoBOX;
};
struct stCareer{
    string JobTitle;
    float monthlySalary;
    int hoursPerDay;
};
struct stPerson{
    string firstName;
    string lastName;
    int age;
    stAddress address;
    stCareer career;
};

void readData(stPerson &Person){
    cout<<"Enter your first name : ";
    cin>>Person.firstName;
    cout<<"Enter your last name : ";
    cin>>Person.lastName;
    cout<<"Enter your age : ";
    cin>>Person.age;
    cout<<"Enter your country : ";
    cin>>Person.address.Country;
    cout<<"Enter your city: ";
    cin>>Person.address.City;
    cout<<"Enter your Zip Code : ";
    cin>>Person.address.ZIPCODE;
    cout<<"Enter your PoBox : ";
    cin>>Person.address.PoBOX;
    cout<<"Enter your Street : ";
    cin.ignore(1,'\n');
    getline(cin,Person.address.Street);
    cout<<"Enter your Job Title : ";
    getline(cin,Person.career.JobTitle);
    cout<<"Enter your Hours Work Per Day : ";
    cin>>Person.career.hoursPerDay;
    cout<<"Enter your monthly salary : ";
    cin>>Person.career.monthlySalary;
}

void printData(stPerson Person){
    cout<<"========================\n";
    cout<<"First Name: " << Person.firstName <<endl;
    cout<<"Last Name: " << Person.lastName <<endl;
    cout<<"Age: " << Person.age <<endl;
    cout<<"Job Title: " << Person.career.JobTitle <<endl;
    cout<<"Monthly Salary: " << Person.career.monthlySalary <<endl;
    cout<<"Hours Per Day: " << Person.career.hoursPerDay <<endl;
    cout<<"Country: " << Person.address.Country <<endl;
    cout<<"City: " << Person.address.City <<endl;
    cout<<"Street: " << Person.address.Street <<endl;
    cout<<"ZipCode: " << Person.address.ZIPCODE <<endl;
    cout<<"PoBOX: " << Person.address.PoBOX <<endl;
    cout<<"========================\n";

}

int main(){
    stPerson Person1;
    readData(Person1);
    printData(Person1);
}