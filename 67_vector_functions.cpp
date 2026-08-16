#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    cout<<"Stack Size : "<<nums.size()<<endl;
    cout<<"First Element : "<<nums.front()<<endl;
    cout<<"Last Element : "<<nums.back()<<endl;
    cout<<"Is Empty ? (1/0) : "<<nums.empty()<<endl;
    cout<<"Capacity : "<<nums.capacity()<<endl;

    return 0;
}

