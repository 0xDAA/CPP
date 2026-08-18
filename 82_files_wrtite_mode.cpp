#include<iostream>
#include <fstream>
using namespace std;

int main() {
    fstream MyFile;
    MyFile.open("C:/FileOut/MyFilex.txt",ios::out); // Write Mode
    if (MyFile.is_open()){
        MyFile<<"Hello My Name is : Ahmed\n";
        MyFile<<"I'm from algeria\n";
        MyFile<<"I love programming\n";
        MyFile.close();
    }
    return 0;
}