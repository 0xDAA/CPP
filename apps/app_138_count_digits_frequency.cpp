#include <iostream>
using namespace std;

string readText(){
    cout<<"Enter a number : ";
    string text;
    cin>>text;
    return text;
}

int countDigit(string text,char dex){
    int count=0;
    for (int i=text.length() - 1;i>=0;i--){
        if(text[i] == dex){
            count++;
        }
    }
    return count;
}

void printTotalCount(string text){
    for (int i = 0; i < 10; i++){
        char digit = (char)(i + '0');

        int c = countDigit(text, digit);
        if (c != 0){
            cout << "Number : " << i << " repeated in the text : " << c << " times\n";
        }
    }
}

int main(){
    printTotalCount(readText());
    return 0;
}