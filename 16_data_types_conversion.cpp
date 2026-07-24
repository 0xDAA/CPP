#include <iostream>
#include <string>
using namespace std;

int main(){
    string st1 = "43.22";
    int n1= 20;
    double n2=33.5;
    float n3=55.23;

    // st1 to double and float and int:
    // to convert from string to other types we should include <string> lib
    cout<< stod(st1)<<endl; // Function stod (String to double)
    cout<< stof(st1)<<endl; // Function stod (String to float)
    cout<< stoi(st1)<<endl; // Function stod (String to int)

    // Convert n1 to string
    // We will use to_string() function
    cout<< to_string(n1)<<endl; // From Integer to String
    cout<< to_string(n2)<<endl; // From Double to String

    // Convert n3 to string and integer:
    cout<<to_string(n3)<<endl; // From Float to String
    cout<< int(n3)<<endl; // From float to Integer
}