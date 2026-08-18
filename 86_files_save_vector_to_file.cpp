#include<iostream>
#include <fstream>
#include<vector>
using namespace std;

void SaveVectorToFile(string filePath,vector<string> &vFile){
    fstream file;
    file.open(filePath,ios::out); // Write File
    if (file.is_open()){
        for (string i:vFile){
            file<<i<<"\n";
        }
        file.close();
    }
}

int main() {
    vector<string> vSaveContent ={"Ahmed","Abdelhalim","Ali","Youcef"};
    SaveVectorToFile("C:/FileOut/MyFilex.txt",vSaveContent);
    return 0;
}