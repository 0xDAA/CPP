#include <iostream>
using namespace std; 

enum Color{Black,White,Grey,Green,Red};
enum Motor{V6,V8,V12};

struct Car{
    string Brand,Model;
    int Year;
    Motor Motor;
    Color color;
};

void addCar(Car &Car){
    string userInput;
    cout<<"Enter Car Brand: ";
    cin>>Car.Brand;
    cout<<"Enter Car Model: ";
    cin>>Car.Model;
    cout<<"Enter Car Year: ";
    cin>>Car.Year;
    cout<<"Pick Car Color: "<<endl;
    cout<<"[-] Black"<<endl;
    cout<<"[-] White"<<endl;
    cout<<"[-] Grey"<<endl;
    cout<<"[-] Green"<<endl;
    cout<<"[-] Red"<<endl;
    cin>>userInput;
    if(userInput=="Black"){
        Car.color=Color::Black;
    } else if( userInput =="White"){
        Car.color=Color::White;
    } else if(userInput =="Grey"){
        Car.color=Color::Grey;
    } else if (userInput =="Green"){
        Car.color=Color::Green;
    } else if (userInput =="Red"){
        Car.color=Color::Red;
    }
    cout<<"Pick Car Motor: "<<endl;
    cout<<"[-] V6"<<endl;
    cout<<"[-] V8"<<endl;
    cout<<"[-] V12"<<endl;
    cin>>userInput;
    if (userInput=="V6"){
        Car.Motor=Motor::V6;
    } else if (userInput=="V8"){
        Car.Motor=Motor::V8;
    } else if (userInput=="V12"){
        Car.Motor=Motor::V12;
    }
}

void addCars (Car Car[3]){
    addCar(Car[0]);
    addCar(Car[1]);
    addCar(Car[2]);
}

void printCar(Car Car){
    cout<<"==================\n";
    cout<<"Car Brand: "<<Car.Brand<<endl;
    cout<<"Car Model : "<<Car.Model<<endl;
    cout<<"Car Year: "<<Car.Year<<endl;
    cout<<"Car Motor ID: "<<Car.Motor<<endl;
    cout<<"Car Color ID: "<<Car.color<<endl;
    cout<<"==================\n";
}

void printCars(Car Cars[3]){
    printCar(Cars[0]);
    printCar(Cars[1]);
    printCar(Cars[2]);
}
int main(){
    Car Cars[3];

    addCars(Cars);
    printCars(Cars);

}
