#include <iostream>
using namespace std; 

enum enWeekDay {Sun=1,Mon,Tue,Wed,Thu,Fri,Sat};

void showWeekDayMenu(){
    cout<<"===================\n";
    cout<<"======WeekDays=====\n";
    cout<<"===================\n";
    cout<<"1- Sunday"<<endl;
    cout<<"2- Monday"<<endl;
    cout<<"3- Tuesday"<<endl;
    cout<<"4- Wednesday"<<endl;
    cout<<"5- Thursday"<<endl;
    cout<<"6- Friday"<<endl;
    cout<<"7- Saturday"<<endl;
    cout<<"Your Choice is : ";
}

enWeekDay readDay(){
    int wd;
    cin>>wd;

    return (enWeekDay)wd;
}
void getWeekDay(enWeekDay Day){
    switch (Day)
    {
    case enWeekDay::Sun :
        cout<<"Sunday";
        break;
    case enWeekDay::Mon :
        cout<<"Monday";
        break;
    case enWeekDay::Tue :
        cout<<"Tuesday";
        break;
    case enWeekDay::Wed :
        cout<<"Wednesday";
        break;
    case enWeekDay::Thu :
        cout<<"Thursday";
        break;
    case enWeekDay::Fri :
        cout<<"Friday";
        break;
    case enWeekDay::Sat :
        cout<<"Saturday";
        break;
    default:
        cout<<"No Day";
        break;
    }
}

int main(){
    showWeekDayMenu();
    getWeekDay(readDay());
}