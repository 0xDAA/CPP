#include <iostream>
using namespace std; 

enum enPassFail{Pass=1,Fail=2};

int readMark(){
    int mark;
    cout<<"Please enter mark: ";
    cin>>mark;
    return mark;
}

enPassFail checkingMark(int num){
    if(num >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void printResult(int mark){
    if(checkingMark(mark)== enPassFail::Pass)
        cout<<"You passed!";
    else
        cout<<"You Failed!";
}

int main(){
    printResult(readMark());
    return 0;
}