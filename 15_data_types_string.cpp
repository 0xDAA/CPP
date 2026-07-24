#include <iostream>
#include <string>

using namespace std;

/*
    bool => Boolean
    --- Store text data like names, job roles, password, ...etc
    --- 32 Byte size in memory
*/

int main() {
    string userName = "0xDAA";
    string myChar = "A"; // Stored as a string not character!

    cout <<userName << ", Welcome"<< endl;
    cout << sizeof(userName)<<endl;

    cout<< userName[1]<<endl; // Will Print x

    cout<<userName.length()<<endl; // Length of userName

    string s1="10",s2="20",s3;
    s3 = s1+s2; // 1020 not 30
    cout <<s3<<endl;
    // to print 10 + 20 = 30 We should convert strings to int
    // before using stoi we will include lib called <string> 
    cout<<stoi(s1)+stoi(s2)<<endl; // 30
    return 0;
}
