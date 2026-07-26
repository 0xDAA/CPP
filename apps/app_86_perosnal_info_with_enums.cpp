#include <iostream>
using namespace std; 

enum Gender {Male,Female};
enum Status {Single,Married};

struct personInfo{
    string FullName;
    int age;
    Gender gender;
    Status status;
};

int main(){

    personInfo person1;
    person1.FullName="DAA";
    person1.age=23;
    person1.gender= Gender::Male;
    person1.status= Status::Married;

    cout<<"Full Name: "<<person1.FullName <<endl;
    cout<<"Age: "<<person1.age <<endl;
    cout<<"Gender: "<<person1.gender <<endl;
    cout<<"isMarried?: "<<person1.status <<endl;


    return 0;
}