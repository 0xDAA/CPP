#include <iostream>
using namespace std;

// Structure of Social media Accounts:
struct socialMedia{
    string facebook="";
    string instagram="";
    string twitter="";
};
// Struct of Contact Informations
struct Contact {
    string street;
    string PoBox;
    string phone;
    socialMedia socialAccounts;
};
// Person Data:
struct Person {
    Contact contact;
    string name,city,country;
    int age;
    float monthlySalary;
    bool isMarried;
    void print(){
        cout<<"========================\n";
        cout<<"Name: "<<name <<"\n";
        cout<<"Age: "<<age <<"\n";
        cout<<"City: "<< city<<"\n";
        cout<<"Country: "<<country <<"\n";
        cout<<"Monthly Salary: "<< monthlySalary<<"\n";
        cout<<"Is He/She Married ?: "<< bool(isMarried) <<"\n";
        cout<<"==========Contact========\n";
        cout<<"Phone: "<<contact.phone <<"\n";
        cout<<"PoBox: "<<contact.PoBox <<"\n";
        cout<<"Street: "<<contact.street <<"\n";
        cout<<"Facebook: "<<contact.socialAccounts.facebook <<"\n";
        cout<<"Instagram: "<<contact.socialAccounts.instagram <<"\n";
        cout<<"Twitter: "<<contact.socialAccounts.twitter <<"\n";
        cout<<"========================\n";
    }
};
int main() {
    // Declare Variable P1 as a Person type
    Person P1;
    // Fill Informations:
    P1.age=23;
    P1.city="Algeria";
    P1.country="Algeria";
    P1.isMarried=0;
    P1.monthlySalary=7850;
    P1.name="Ahmed";
    P1.contact.phone="+213778888888";
    P1.contact.PoBox="712";
    P1.contact.street="Algeria, Algeria, Street 544 BT 712";
    P1.contact.socialAccounts.facebook="Ahmed";
    P1.contact.socialAccounts.instagram="Ahmed";
    P1.contact.socialAccounts.twitter="Ahmed";
    // Print All data:
    P1.print();
    return 0;
}
