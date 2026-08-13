#include<iostream>
using namespace std;

void printNumbers(int from,int to){
    if(from <=to){
        cout<<from<<endl;
        printNumbers(from+1,to);
    }
}

void printNumbersReverse(int from,int to){
    if(from >=to){
        cout<<from<<endl;
        printNumbersReverse(from-1,to);
    }
}


int main()
{    
    printNumbers(1,4);
    printNumbersReverse(7,1);

}

