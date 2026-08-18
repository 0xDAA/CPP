#include<iostream>
#include <fstream>
#include<vector>
using namespace std;

void SaveVectorToFile(string filePath,vector<string> &vFile){
    fstream file;
    file.open(filePath,ios::out); // Write File
    if (file.is_open()){
        for (string line:vFile){
            if(line !=""){
                file<<line<<"\n";
            }
        }
        file.close();
    }
}

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

void updateRecordFromFile(string fileName,string record,string newRecord){
    vector<string> fileContent;
    LoadDataFromFileToVector(fileName,fileContent);
    for(string &line:fileContent){
        if (line == record){
            line=newRecord;
        }
    }
    SaveVectorToFile(fileName,fileContent);
}

int main() {
    printFileContent("C:/FileOut/MyFilex.txt");
    updateRecordFromFile("C:/FileOut/MyFilex.txt","Ahmed","Ali");
    printFileContent("C:/FileOut/MyFilex.txt");
    return 0;
}