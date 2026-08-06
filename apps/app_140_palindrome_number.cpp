#include <iostream>
using namespace std;

string readNumber(){
    cout<<"Enter a number to reverse : ";
    string number;
    cin>>number;
    return number;
}

string reverse(string myNum){
    string reNum="";
    for (int i=myNum.length()-1;i>=0;i--){
        reNum +=myNum[i];
    }
    return reNum;
}

void checkerPalindrome(string number){
    if(number == reverse(number)){
        cout<<number<<" is palindrome";
    } else {
        cout<<number<<" not palindrome";
    }
}
int main(){
    checkerPalindrome(readNumber());
    return 0;
}