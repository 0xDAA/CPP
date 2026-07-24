#include <iostream>
using namespace std;

void sayHello(string userName="Unknown"){
    cout<<"Hello Mr."<<userName<<endl;
}
int main(){
    // Default Value is Unknown
    sayHello();
}