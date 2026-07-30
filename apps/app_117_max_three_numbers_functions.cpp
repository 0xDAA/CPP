#include <iostream>
using namespace std;

void readNumbers(int &n1,int &n2,int &n3){
    cout<<"Enter Number 1 : ";
    cin>>n1;
    cout<<"Enter Number 2 : ";
    cin>>n2;
    cout<<"Enter Number 3 : ";
    cin>>n3;
}

int MaxOfThreeNumbers(int n1,int n2,int n3){
    if (n1 > n2 ){
        if (n1 > n3){
            return n1;
        } else {
            return n3;
        }
    } else {
        if (n2 > n3){
            return n2;
        } else {
            return n3;
        }
    }
}

void printResult(int max){
    cout<<"MaxNumber is "<<max;
}
int main(){
    int A,B,C;
    readNumbers(A,B,C);
    printResult(MaxOfThreeNumbers(A,B,C));

    return 0;
}