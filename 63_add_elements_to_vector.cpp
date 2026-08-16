#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vNumbers;
    vNumbers.push_back(10);
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);

    for (int &num: vNumbers){
        cout<<num<<"  ";
    }
    return 0;

}

