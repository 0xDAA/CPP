#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    cout<<"Stack Size : "<<nums.size()<<endl; // 3
    nums.clear();
    cout<<"Stack Size : "<<nums.size(); // 0
    return 0;
}

