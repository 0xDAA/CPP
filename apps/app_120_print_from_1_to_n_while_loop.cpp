#include <iostream>
using namespace std;

int readNumber(){
    int number;
    cout<<"Enter a valid number : ";
    cin>>number;
    return number;
}

void printRangeFrom1toN_UsingWhile(int N){
    int counter = 0;
    while(N != counter){
        counter++;
        cout<<counter<<endl;
    }
}


int main(){
    int N = readNumber();
    printRangeFrom1toN_UsingWhile(N);
    return 0;
}