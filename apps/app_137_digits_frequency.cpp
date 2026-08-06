#include <iostream>
using namespace std;

string readText(){
    cout<<"Enter a text : ";
    string text;
    cin>>text;
    return text;
}
char readChar(){
    cout<<"Enter a char to count : ";
    char chr;
    cin>>chr;
    return chr;
}

int count(string text,char dex){
    int count=0;
    for (int i=text.length() - 1;i>=0;i--){
        if(text[i] == dex){
            count++;
        }
    }
    return count;
}

void printTotalCount(string text,char chr){
    cout<<"Char : "<<chr<<" repeted in the text : "<<count(text,chr)<<" times";
}

int main(){
    printTotalCount(readText(),readChar());
    return 0;
}