#include<iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> arrayOfNums={1,22,3,4,5};
    vector<int>::iterator it;
    for (it = arrayOfNums.begin(); it!=arrayOfNums.end();it++){
        cout<<*it<<" ";
    }
}

