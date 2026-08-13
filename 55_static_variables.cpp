#include<iostream>
using namespace std;

void MyFunc(){
    static int number = 1;
    cout<<"Value of number : "<<number<<endl;
    number++;
}

int main() {
    MyFunc();
    MyFunc();
    MyFunc();
    return 0;

}

