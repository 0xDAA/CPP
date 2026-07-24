#include <iostream>
using namespace std;

// This is global Variable
const float globalVariable = 3.14;// Variable Global Scope
int x = 100;
int secondFunction () {
    cout << globalVariable << " : coming from second function"<<endl;
    // cout << localVariable << " : Local coming from second function"<<endl; // Error :Local Variable is only for main function
    return 0;
}
int main() {
    // This is local Variable
    int localVariable = 6.14;
    int x = 10;
    cout << globalVariable << " : Global coming from main function"<<endl;
    cout << localVariable << " : Local coming from main function"<<endl;
    cout << "Local x is : "<<x<<endl;
    cout << "Global x is : "<<::x<<endl;
    ::x= 7000;
    cout << "Global x after edit is : "<<::x<<endl;
    cout << "====================\n";
    secondFunction();
    return 0;
}
