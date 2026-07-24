#include <iostream>
using namespace std;

void printSumOdd(int n){
    int sumOdd=0;
    for (int i=1; i<=n;++i){
        if(!(i %2 ==0)){
            sumOdd +=i;
        }
    }
    cout<< sumOdd;
}

int main(){
    int nt;
    cout<<"Enter total of numbers to print sum of odd numbers : "<<endl;
    cin>>nt;
    printSumOdd(nt);
}