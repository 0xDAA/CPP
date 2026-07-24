#include <iostream>
using namespace std;


enum Cars {BMW, Porsche, Mercedes, Jeep};
enum Colors {Red=10,Green=20,Blue=30,Yellow=40};
enum Motors {V6,V8,V12};
enum Gender {Male,Female};
enum Status {Single,Married};
int main(){
    Cars MyCar1,MyCar2;

    MyCar1 = Cars::Porsche;
    MyCar2 = Cars::BMW;

    Gender MyGen= Gender::Male;

    Motors MyCarMotor = Motors::V8;

    Status MyStatus=Status::Single;

    Colors MyFavColor=Colors::Blue;

    cout<<MyCar1<<"\n";
    cout<<MyCar2<<"\n";

    cout<<MyFavColor;
}