#include <iostream>
using namespace std;

enum enPassFail{Pass=1,Fail=2};

struct threeNumbers{
    int mark1,mark2,mark3;
};

threeNumbers readNumbers(){
    threeNumbers numbers;
    cout<<"Enter mark 1 : ";
    cin>> numbers.mark1;
    cout<<"Enter mark 2 : ";
    cin>> numbers.mark2;
    cout<<"Enter mark 3 : ";
    cin>> numbers.mark3;
    return numbers;
}

float average(threeNumbers nums){
    return (nums.mark1+nums.mark2+nums.mark3)/3;
}

enPassFail checker(float avg){
    if (avg>=50)
        return enPassFail::Pass;
    else 
        return enPassFail::Fail;
}

void printTotal(threeNumbers threeNums){
    cout<<"average is : "<<average(threeNums);
    if (checker(average(threeNums))== enPassFail::Pass){
        cout<<"\n You Passed!";
    } else {
        cout<<"\n You Failed!";
    }
}
int main(){
    printTotal(readNumbers());
    return 0;
}