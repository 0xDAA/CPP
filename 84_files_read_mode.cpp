#include<iostream>
#include <fstream>
using namespace std;

void printFileContent(string filePath){
    fstream file;
    file.open(filePath,ios::in); // Read File
    if (file.is_open()){
        string line;
        while(getline (file,line)){
            cout<<line<<endl;
        }
        file.close();
    }
}

int main() {
    printFileContent("C:/FileOut/MyFilex.txt");
    return 0;
}