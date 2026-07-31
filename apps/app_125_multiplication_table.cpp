#include <iostream>
using namespace std;

void printHeaderTable(){
    cout<<"\n\n\t\t\t Multiplication Table From 1 to 10 \n\n";
    for (int i = 1;i <=10;i++){
        cout<<"\t"<<i;
    }
    cout<<endl;
    cout<<"__________________________________________________________________________________\n";
}

void printTableMultiplication(){
    printHeaderTable();
    for (int i =1;i <=10;i++){
        cout<<i<<"\t|";
        for(int j=1; j <= 10;j++){
            cout<<j*i<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    printTableMultiplication();
    return 0;
}