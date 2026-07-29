#include <iostream>
using namespace std; 

struct stPersonInfo{
    string Name;
    int age;
    bool hasDrivingLicense;
    bool hasRec;
};

stPersonInfo readInfo(){
    stPersonInfo Info;
    cout<<"Enter driver name: ";
    cin>>Info.Name;
    cout<<"Enter driver age: ";
    cin>>Info.age;
    cout<<"is "<<Info.Name<<" had a driver license? ";
    cin>>Info.hasDrivingLicense;
    cout<<"is "<<Info.Name<<" had a recommendation? ";
    cin>>Info.hasRec;
    return Info;
}

bool isAccepted(stPersonInfo Info){
    return (Info.age>=21 && Info.hasDrivingLicense|| Info.hasRec);
}

void printResult(stPersonInfo Info){
    if (isAccepted(Info)){
        cout<<Info.Name<<" Hired!";
    } else {
        cout<<Info.Name<<" Rejected!";
    }
}

int main(){
    printResult(readInfo());
    return 0;
}