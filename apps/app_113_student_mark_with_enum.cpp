#include <iostream>
using namespace std;

enum enMarkStudent{Pass=1,Fail=2};

int readStudentMark(){
    cout<<"Enter Student mark: ";
    int stMark;
    cin>>stMark;
    return stMark;
}

enMarkStudent checkingMark(int mark){
    if (mark >=50)
        return enMarkStudent::Pass;
    else
        return enMarkStudent::Fail;
}

void printResult(int studentMark){
    if(checkingMark(studentMark)== enMarkStudent::Pass){
        cout<<"Congrats, you passed!";
    } else {
        cout<<"Fool you failed";
    }
}
int main(){
    printResult(readStudentMark());
    return 0;
}