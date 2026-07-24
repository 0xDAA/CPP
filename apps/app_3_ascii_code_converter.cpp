#include <iostream>

using namespace std;
char intToAscii(int asciiID) {
    return char(asciiID);
}

int asciiToInt(char ascii) {
    return int(ascii);
}
void asciiConverterApp(){
    int asciiID,opid;
    char ascii;
    cout<<"Choose Operation:"<<endl;
    cout<<"[1] => Ascii To Int"<<endl;
    cout<<"[2] => Int To Ascii"<<endl;
    cout<<"[Type 1 Or 2] : ";
    cin>>opid;
    if (opid == 1) {
        cout<<"Enter ASCII (Char) To Convert : ";
        cin>> ascii;
        cout<<asciiToInt(ascii);
    } else if (opid == 2) {
        cout<<"Enter Integer to Convert : ";
        cin>> asciiID;
        cout<<intToAscii(asciiID);
    }
}
int main() {
    asciiConverterApp();
}
