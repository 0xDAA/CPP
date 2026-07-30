#include <iostream>
using namespace std;

int readNumber(){
    int number;
    cout<<"Enter a valid number : ";
    cin>>number;
    return number;
}

void printRangeFrom1toN_UsingDoWhile(int N){
    int counter = N+1;
    do{
        counter--;
        cout<<counter<<endl;
    }while (counter != 1);
}


int main(){
    int N = readNumber();
    printRangeFrom1toN_UsingDoWhile(N);
    return 0;
}