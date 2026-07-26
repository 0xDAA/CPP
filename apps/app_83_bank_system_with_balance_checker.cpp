#include <iostream>
using namespace std;

struct bankSecurityDetails{
    string userPassword;
    int userPIN;
    bool isCardFreezed;
};

struct personDetails{
    string fullName;
    string region;
    int ZIPCODE;
};


struct bankUserDetails {
    bankSecurityDetails Security;
    personDetails Person;
    float balance;

};

void initializationBankAccount(bankUserDetails &user){
    user.Person.fullName="DERRAGUI ABDELHALIM AHMED";
    user.Person.region="DZ";
    user.Person.ZIPCODE=16000;
    user.Security.isCardFreezed=0;
    user.Security.userPassword="123-2027sBank";
    user.Security.userPIN=7514;
    user.balance=170000;
}

void balanceChecker(bankUserDetails user,int PIN){
    if(PIN == user.Security.userPIN){
        cout<<"User Balance : "<<user.balance;
    } else {
        cout<<"Access Denied, wrong PIN!";
    }
}

int main(){
    bankUserDetails user1;
    initializationBankAccount(user1);
    balanceChecker(user1,7514);
    return 0;
}