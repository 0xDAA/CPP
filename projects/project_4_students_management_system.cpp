#include<iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Structure of Person Details
struct stPerson{
    string fname;
    string lname;
    string city;
    int age;
};

// Structure of Subjects Marks
struct stSubjectsMarks{
    int sb1,sb2,sb3;
};

// Struct of Student Details
struct stStudent{
    stPerson personData;
    stSubjectsMarks marks;
    int totalMark,stID;
};

// Mark Calculator
float markCalc(int sb1,int sb2,int sb3){
    return (sb1+sb2+sb3)/3;
}

// Grade Evaluator
char gradeEva(float mark){
    if (mark >=90){
        return 'A';
    } else if (mark >=80){
        return 'B';
    } else if (mark >=70){
        return 'C';
    } else if (mark >=60){
        return 'D';
    } else if (mark >=50){
        return 'E';
    } else{
        return 'F';
    }
}

// Add New Student Function:
void addStudent(vector<stStudent> &students){
    stStudent tempSTD;
    cout<<"Enter student First name: ";
    cin>>tempSTD.personData.fname;
    cout<<"Enter student Last name: ";
    cin>>tempSTD.personData.lname;
    cout<<"Enter student Age: ";
    cin>>tempSTD.personData.age;
    cout<<"Enter student City: ";
    cin>>tempSTD.personData.city;
    cout<<"Enter student Subject 1 Mark: ";
    cin>>tempSTD.marks.sb1;
    cout<<"Enter student Subject 2 Mark: ";
    cin>>tempSTD.marks.sb2;
    cout<<"Enter student Subject 3 Mark: ";
    cin>>tempSTD.marks.sb3;
    tempSTD.totalMark=markCalc(tempSTD.marks.sb1,tempSTD.marks.sb2,tempSTD.marks.sb3);
    tempSTD.stID=students.size()+1;
    students.push_back(tempSTD);
}

// Add Number of Students in the students vector
void addStudents(vector<stStudent> &students){
    string userInput;
    do {
        addStudent(students);
        cout<<"Do you want add more student ? (y/n): "<<endl;
        cin>>userInput;
    } while(userInput=="Y" || userInput =="y");
}

// Print Students Details
void printStudents(vector<stStudent> &students){
    cout<<"|------|--------------------------|-------|-------|"<<endl;
    cout<<"|  ID  |      Student Details     |  Mark | Grade |"<<endl;
    cout<<"|------|--------------------------|-------|-------|"<<endl;

    for (stStudent student : students){
        cout<<"|"<<setw(4)<<student.stID<<"  |"
            <<setw(26)<<student.personData.fname<<"|"
            <<setw(5)<<student.totalMark<<"  |"
            <<setw(5)<<gradeEva(student.totalMark)<<"  |"<<endl;

        cout<<"|"<<setw(6)<<" "<<"|"
            <<setw(10)<<student.personData.age
            <<setw(16)<<student.personData.city<<"|"
            <<setw(7)<<" "<<"|"
            <<setw(7)<<" "<<"|"<<endl;

        string marks = "M1:" + to_string(student.marks.sb1) +
                       " M2:" + to_string(student.marks.sb2) +
                       " M3:" + to_string(student.marks.sb3);

        cout<<"|"<<setw(6)<<" "<<"|"
            <<setw(26)<<marks<<"|"
            <<setw(7)<<" "<<"|"
            <<setw(7)<<" "<<"|"<<endl;

        cout<<"|------|--------------------------|-------|-------|"<<endl;
    }
}

void menu(vector<stStudent> &students){
    short int userInput;
    while (true){
        cout<<"======= MENU ======="<<endl;
        cout<<"[1] Add New Students"<<endl;
        cout<<"[2] Get Students"<<endl;
        cout<<"[3] Exit"<<endl;
        cout<<"===================="<<endl;
        cout<<"Choose one : ";
        cin>>userInput;
        if (userInput == 1){
            addStudents(students);
        } else if (userInput ==2) {
            printStudents(students);
        } else if (userInput == 3){
            break;
        }
    }
}

int main() {
    vector<stStudent> students;
    menu(students);
    return 0;
}