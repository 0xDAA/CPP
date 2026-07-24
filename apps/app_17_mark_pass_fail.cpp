#include <iostream>
using namespace std;

string markChecker(float mark){
    if (mark >=50) {
        return "Pass";
    } else {
        return "Fail";
    }
}

int main(){
    float mark;
    cout<<"Enter your mark: ";
    cin>>mark;
    cout<<"Your mark is "<<mark<< " and you "<<markChecker(mark);
}