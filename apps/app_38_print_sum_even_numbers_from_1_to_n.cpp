#include <iostream>
using namespace std;

void printSumEven(int n){
    int sumEven=0;
    for (int i=1; i<=n;++i){
        if(i %2 ==0){
            sumEven +=i;
        }
    }
    cout<< sumEven;
}

int main(){
    int nt;
    cout<<"Enter total of numbers to get sum even numbers : "<<endl;
    cin>>nt;
    printSumEven(nt);
}