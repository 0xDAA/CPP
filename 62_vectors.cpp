#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vNumbers = {10,20,30,40,50};

    for (int &num: vNumbers){
        cout<<num<<"  ";
    }
    return 0;

}

