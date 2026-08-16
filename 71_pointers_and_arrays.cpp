#include<iostream>
using namespace std;

int main() {
    int arr[4]= {10,20,300,40};
    int *ptr =arr;

    cout<<"Addr : "<< ptr<<endl;
    cout<<"Addr : "<< ptr + 1<<endl;
    cout<<"Addr : "<< ptr + 2<<endl;
    cout<<"Addr : "<< ptr + 3<<endl;

    // Values:
    for (int i=0;i <4;i++){
        cout<<"Value : "<<*(ptr + i)<<endl;
    }

}

