#include<iostream>
using namespace std;


int main() {
    void * ptr;
    int x=5;
    float y=10.6;

    ptr =&x;
    cout<< ptr<<endl;
    cout<< *(static_cast<int*>(ptr))<<endl;
    ptr =&y;
    cout<< ptr<<endl;
    cout<< *(static_cast<float*>(ptr))<<endl;
}

