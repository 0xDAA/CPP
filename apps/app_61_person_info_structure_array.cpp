#include <iostream>
using namespace std;

struct personInfo{
    string firstName;
    string lastName;
    int age;
    string phoneNumber;
};

int main(){
    personInfo Persons[2];

    Persons[0].firstName="Ahmed";
    Persons[0].lastName="Abdelhalim";
    Persons[0].age=23;
    Persons[0].phoneNumber="+2137777777777";

    Persons[1].firstName="0x";
    Persons[1].lastName="DAA";
    Persons[1].age=25;
    Persons[1].phoneNumber="+2136667777777";

    cout<<Persons[1].lastName<<endl;
}