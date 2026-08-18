#include<iostream>
#include <fstream>
#include<vector>
using namespace std;

void LoadDataFromFileToVector(string filePath,vector<string> &vFile){
    fstream file;
    file.open(filePath,ios::in); // Read File
    if (file.is_open()){
        string line;
        while(getline (file,line)){
            vFile.push_back(line);
        }
        file.close();
    }
}

int main() {
    vector<string> vFileContent;
    LoadDataFromFileToVector("C:/FileOut/MyFilex.txt",vFileContent);
    for(string &line:vFileContent){
        cout<<line<<endl;
    }
    return 0;
}