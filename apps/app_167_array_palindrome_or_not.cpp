#include <iostream>

using namespace std;

void arrayFill(int arr[100],int &arrLeng){
    arrLeng=7;
    arr[0]=10;
    arr[1]=20;
    arr[2]=20;
    arr[3]=30;
    arr[4]=20;
    arr[5]=20;
    arr[6]=10;
}

void arrayReverse(int arr[100],int arr2[100],int arrLeng){
    int arr2Leng=0;
    for(int i=arrLeng-1;i>=0;i--){
        arr2[arr2Leng]=arr[i];
        arr2Leng++;
    }
}

bool palindromeChecker(int arr[100],int arr2[100],int arrLeng){
    for (int i =0 ; i < arrLeng;i++){
        if (arr[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

void printPalindrome (bool palindrome){
    if(palindrome){
        cout<<"Array is palindrome!";
    } else {
        cout<<"Array is not palindrome :(";
    }
}

void arrayPrint (int arr[100],int arrLeng){
    cout<<"Elements in Array: "<<endl;
    for(int i = 0;i <arrLeng;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    srand((unsigned)time(NULL));
    int arr[100],arrLength=0;
    int arr2[100],arr2Length=0;
    arrayFill(arr,arrLength);
    arrayPrint(arr,arrLength);
    arrayReverse(arr,arr2,arrLength);
    arrayPrint(arr2,arrLength);
    printPalindrome(palindromeChecker(arr,arr2,arrLength));


}