#include <iostream>
using namespace std;

enum enColors{Red=1,Blue=2,Green=3,Yellow=4};

int main(){
    cout<<"====================="<<endl;
    cout<<"(1) Color Red : "<<endl;
    cout<<"(2) Color Blue : "<<endl;
    cout<<"(3) Color Green : "<<endl;
    cout<<"(4) Color Yellow : "<<endl;
    cout<<"====================="<<endl;
    int c;
    enColors Color;
    cin>>c;
    Color = (enColors)c;
    if (Color == enColors::Red){
        system("color 4F");
    } else if (Color == enColors::Blue){
        system("color 1F");
    } else if (Color == enColors::Green){
        system("color 2F");
    } else if (Color == enColors::Yellow){
        system("color 6F");
    }
    return 0;
}