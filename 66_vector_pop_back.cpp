#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    cout<<"Stack Size : "<<nums.size()<<endl; // 3

    nums.pop_back(); // Delete last item on the vector
    cout<<"Stack Size : "<<nums.size(); // 2
    return 0;
}

