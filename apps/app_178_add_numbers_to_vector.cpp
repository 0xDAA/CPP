#include<iostream>
#include <vector>
using namespace std;


void readNumber (vector <int> &v){
    int num;
    string userInput;
    do {
        cout<<"Enter a number : ";
        cin>>num;
        v.push_back(num);
        cout<<"Do you want add more numbers ?(y/n) : ";
        cin>>userInput;
    } while(userInput == "y" || userInput =="Y");
}

void printNumbers(vector <int> &v){
        for (int &i: v){
        cout<<i<<endl;
    }
}


int main() {
    vector <int> vNumbers;
    readNumber(vNumbers);
    printNumbers(vNumbers);
    return 0;

}

