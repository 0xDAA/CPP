#include<iostream>
#include <fstream>
using namespace std;

int main() {
    fstream MyFile;
    MyFile.open("C:/FileOut/MyFilex.txt",ios::out | ios::app); // Append Mode
    if (MyFile.is_open()){
        MyFile<<"Languages : \n";
        MyFile<<"HTML | CSS | JS | C# | C++\n";
        MyFile.close();
    }
    return 0;
}