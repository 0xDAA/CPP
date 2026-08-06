#include <iostream>
using namespace std;

string enBase30(string text,int encryptionKey){
    string encryptedText="";
    for (int i=0;i<text.length();i++){
        encryptedText= encryptedText +char(text[i]-encryptionKey);
    }
    return encryptedText;
}

string deBase30(string encryptedText,int encryptionKey){
    string decryptedText="";
    for (int i=0;i<encryptedText.length();i++){
        decryptedText= decryptedText +char(encryptedText[i]+encryptionKey);
    }
    return decryptedText;
}
int main(){
    int encryptionPrivateKey = 30;
    cout<<enBase30("Hello My name is ahmed",encryptionPrivateKey)<<endl;
    cout<<deBase30(enBase30("Hello My name is ahmed",encryptionPrivateKey),encryptionPrivateKey)<<endl;
    return 0;
}