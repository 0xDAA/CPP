#include <iostream>
using namespace std;
/*
    Variables Naming Rules & Best Practices
    - Naming Rules:
    --- Must Be Unique
    --- Case Sensitive
    --- Cannot Start With Numbers!
    --- Contain Numbers or Letters or Underscore (_)
    --- No White Space or Special Characters
    --- Reserved Keywords not allowed! (class,public,int,... etc)
    
    - Best Practices:
    --- Related Names
    ---  Writing Style (Camel Case) Example : createNewUser, deletePost, totalPrice,...

*/
int main() {
    // Example of Best Practices:
    short int age = 25;
    float totalPrice = 150.50;
    string userName = "0xDAA";
    bool isOpenToWork = false;
    const float pi = 3.14;
    char userGender = 'M';

    // Example of Bad Practices + Errors:
    int USER AGE = 25; // Error: Because there's space between Variable name
    int TotalPRICE = 1500 ;// Capital Case Allowed but not best practice
    int public = 521; // Error: public is Reserved Word in C++ Language
    string 1user = "Ahmed" // Cannot start with numbers
}
