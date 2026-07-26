#include <iostream>
using namespace std;

bool loginAccess(string userName,string userPassword){
    if (userName =="Ahmed"){
        if(userPassword == "cpp123"){
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

void consoleOutput(){
    string uName,uPass;
    cout<<"Enter Username: ";
    cin>>uName;
    cout<<"Enter Password: ";
    cin>>uPass;
    if(loginAccess(uName,uPass)){
        cout<<"Welcome, "<<uName<<endl;
    } else {
        cout<<"Access Denied!";
    }
}

int main(){
    consoleOutput();
}