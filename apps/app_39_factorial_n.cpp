#include <iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    if (n<=0) {
        cout<<"Factorial must be positive number";
    } else {
        int factorial=1;
        for (int i=n; i>=1;--i){
            factorial = factorial * i;
        }
        cout<<"Factorial of "<<n<<" is "<<factorial<<endl;
    }
}