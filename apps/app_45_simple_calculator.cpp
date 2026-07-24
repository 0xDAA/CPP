#include <iostream>
using namespace std;

float simpleCalculator(int num1,int num2,char operation){
    switch (operation)
    {
    case '+' :
        return num1+num2;
        break;
    case '-' :
        return num1-num2;
        break;
    case '*' :
        return num1*num2;
        break;
    case '/' :
        return num1/num2;
        break;
    default:
        break;
    }
}

int main(){
    int n1,n2;
    char op;
    cout<<"Enter number one: ";
    cin>>n1;
    cout<<"Enter number two: ";
    cin>>n2;
    cout<<"Choose Operation [+] [-] [*] [/] : ";
    cin>> op;
    cout<<simpleCalculator(n1,n2,op);
}