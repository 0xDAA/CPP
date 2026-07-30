#include <iostream>
using namespace std; 

enum enPassFail{Pass=1,Fail=2};

void readMarks(int &mark1,int &mark2,int &mark3){
    cout<<"Enter Mark 1 : ";
    cin>>mark1;
    cout<<"Enter Mark 2 : ";
    cin>>mark2;
    cout<<"Enter Mark 3 : ";
    cin>>mark3;
}

int sum3Marks(int m1,int m2,int m3){
    return m1+m2+m3;
}
float calculateAverage(int m1,int m2,int m3){
    return (float)sum3Marks(m1,m2,m3)/3;
}

enPassFail checkingAverage(float avg){
    if(avg >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void printResult(float avg){
    cout<<"Your average grade is: "<<avg<<endl;
    if(checkingAverage(avg)== enPassFail::Pass){
        cout<< "You passed!";
    } else {
        cout<<"You Failed!";
    }
}
int main(){
    int m1,m2,m3;
    readMarks(m1,m2,m3);
    printResult(calculateAverage(m1,m2,m3));
    return 0;
}