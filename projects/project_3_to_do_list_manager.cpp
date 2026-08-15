#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct stToDo{
    string taskName;
    int taskID;
    bool isDone;
};

void addTask(vector <stToDo> &toDo){
    stToDo stTemp;
    cout<<"Enter task name : ";
    cin>>stTemp.taskName;
    cout<<"Is Task Done ? (1/0) : ";
    cin>>stTemp.isDone;
    stTemp.taskID=toDo.size()+1;
    toDo.push_back(stTemp);
}

void addTasks(vector <stToDo> &toDo) {
    string userInput ="Y";
    do {
        addTask(toDo);
        cout<<"Do you want add more Tasks? (y/n): ";
        cin>>userInput;
    }   while(userInput=="Y"||userInput=="y");
}

void printToDoList(vector <stToDo> &toDo){
    cout<<"|------"<<"|--------------------------"<<"|-------|"<<endl;
    cout<<"|  ID  "<<"|            Tasks         "<<"| Done? |"<<endl;
    cout<<"|------"<<"|--------------------------"<<"|-------|"<<endl;
    for (stToDo task:toDo){
        if (task.isDone == true){
            cout<<"|"<<setw(4)<<task.taskID<<"  |"<<setw(26)<<task.taskName<<"|"<<setw(5)<<"[x]"<<"  |"<<endl;
        } else {
            cout<<"|"<<setw(4)<<task.taskID<<"  |"<<setw(26)<<task.taskName<<"|"<<setw(5)<<"[ ]"<<"  |"<<endl;
        }
        cout<<"|------"<<"|--------------------------"<<"|-------|"<<endl;
    }
}

int main() {
    vector <stToDo> myTodoList;
    addTasks(myTodoList);
    printToDoList(myTodoList);
    return 0;
}

