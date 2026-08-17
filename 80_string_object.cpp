#include<iostream>
#include <string>
using namespace std;


int main() {
    string s1="My name is Ahmed";

    cout<<"Length : "<<s1.length()<<endl;

    cout<<s1.at(6)<<endl;

    s1.append(" Abdelhalim");
    cout<<s1<<endl;

    cout<<s1.back()<<endl;  //Last char

    cout<<s1.front()<<endl; //First char

    s1.insert(0,"Hi, ");
    cout<<s1<<endl;

    cout<<s1.find("Ahmed")<<endl; // Index of "Ahmed"

    cout<<s1.substr(26,5); // halim

    s1.push_back('o');
    cout<<s1<<endl;

    s1.pop_back();
    cout<<s1<<endl;

    cout<<s1.find("Dev")<<endl; //NoPosition
    if (s1.find("Dev") == s1.npos){
        cout<<"Dev Not Found!"<<endl;
    }

    s1.clear(); // Clear all string
    cout<<s1<<endl;// Empty
    
    return 0;
}

