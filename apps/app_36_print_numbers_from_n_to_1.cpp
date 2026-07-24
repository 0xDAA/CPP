#include <iostream>
using namespace std;

void printNumbers(int n){
    for (int i=n; i>=1;--i){
        cout<<i<<endl;
    }
}

int main(){
    int nt;
    cout<<"Enter total of numbers to print : "<<endl;
    cin>>nt;
    printNumbers(nt);
}