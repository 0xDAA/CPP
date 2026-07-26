#include <iostream>
#include <cmath>
using namespace std;

void relationalOperators(int a,int b){
    cout<<a<<" = "<<b<<"? is : "<<(a == b)<<endl;
    cout<<a<<" != "<<b<<"? is : "<<(a != b)<<endl;
    cout<<a<<" >= "<<b<<"? is : "<<(a >= b)<<endl;
    cout<<a<<" <= "<<b<<"? is : "<<(a <= b)<<endl;
    cout<<a<<" < "<<b<<"? is : "<<(a < b)<<endl;
    cout<<a<<" > "<<b<<"? is : "<<(a > b)<<endl;

}

int main(){
    int a,b;
    cout<<"Enter the first number (A) : ";
    cin>>a;
    cout<<"Enter the second number (B) : ";
    cin>>b;

    relationalOperators(a,b);
    return 0;
}