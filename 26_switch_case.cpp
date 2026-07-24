#include <iostream>
using namespace std;

/*
    Switch Case

    Syntax:
    switch(op){
    case //Condition:
        //Do Something
        break;
    }
*/

int main(){
    int day;
    cout<<"Hi User,enter number of the day: ";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"It's Sunday";
        break;
    case 2:
        cout<<"It's Monday";
        break;
    case 3:
        cout<<"It's Tuesday";
        break;
    case 4:
        cout<<"It's Wednesday";
        break;
    case 5:
        cout<<"It's Thursday";
        break;
    case 6:
        cout<<"It's Friday";
        break;
    case 7:
        cout<<"It's Saturday";
        break;
    
    default:
        cout<<"Wrong day!";
        break;
    }
    return 0;
}