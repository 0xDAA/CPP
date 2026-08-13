#include<iostream>
using namespace std;

//function declaration
void add(int a,int b);
int main()
{    
    add(10,20);
}

//function definition
void add (int a,int b){
    cout<<a+b;
}