#include <iostream>
using namespace std;

string readNumber(){
    cout<<"Enter a number to reverse : ";
    string number;
    cin>>number;
    return number;
}

void printReverse(string myNum){
    for (int i=0;i<=myNum.length() - 1;i++){
        cout<<myNum[i]<<endl;
    }
}

int main(){
    printReverse(readNumber());
    return 0;
}