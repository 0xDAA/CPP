#include <iostream>
using namespace std;
int mySumFunction(){
    int a,b;
    cout<<"Please enter number1: ";
    cin>>a;
    cout<<"Please enter number2: ";
    cin>>b;
    cout<<"========================\n";
    return a+b;

}
int main(){
    cout<<mySumFunction();
}