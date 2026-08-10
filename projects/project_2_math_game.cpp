#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

enum enDiff{Easy,Medium,Hard};

enum enOpType{Sum,Sub,Mul,Div};

struct stQuizz {
    enDiff Difficult;
    enOpType OpType;
    int wrongAnswers=0,rightAnswers=0;
    int numberQuestions=0;
};
int randomGenerator(int to){
    int randomNumber = rand()%to;
    return randomNumber;
}

enDiff pickDifficult(){
    int userInput;
    cout<<"Enter Level of questions : "<<endl;
    cout<<"[0] Easy"<<endl;
    cout<<"[1] Medium"<<endl;
    cout<<"[2] Hard"<<endl;
    cin>> userInput;
    return (enDiff)userInput;
}

enOpType pickOperation(){
    int userInput;
    cout<<"Enter Operation of questions : "<<endl;
    cout<<"[0] +"<<endl;
    cout<<"[1] -"<<endl;
    cout<<"[2] *"<<endl;
    cout<<"[3] /"<<endl;
    cin>> userInput;
    return (enOpType)userInput;
}

int numberQuestions(){
    int nq;
    cout<<"Enter number of questions : ";
    cin>>nq;
    return nq;
}

bool mathOperation(int num1,int num2,char optype){
    int playerInput;
    cout<<num1<<endl;
    cout<<num2<<" "<<optype<<endl;
    cout<<"_______"<<endl;
    cout<<"= ";
    cin>>playerInput;
    if (optype=='+'){
        if (playerInput == (num1+num2)){
            return true;
        } else {
            return false;
        }
    } else if(optype =='-'){
        if (playerInput == (num1-num2)){
            return true;
        } else {
            return false;
        }    
    } else if (optype =='*'){
        if (playerInput == (num1*num2)){
            return true;
        } else {
            return false;
        }
    } else if (optype == '/'){
        if (playerInput == (num1/num2)){
            return true;
        } else {
            return false;
        }
    }
}

void summary(stQuizz Quizz){
    cout<<"======= Summary ======="<<endl;
    cout<<"Number of Questions : "<<Quizz.numberQuestions<<endl;
    cout<<"Right Answers : "<<Quizz.rightAnswers<<endl;
    cout<<"Wrong Answers : "<<Quizz.wrongAnswers<<endl;
    if (Quizz.Difficult==enDiff::Easy){
        cout<<"Operation Diff : Easy"<<endl;
    } else if (Quizz.Difficult ==enDiff::Medium){
        cout<<"Operation Diff : Medium"<<endl;
    } else if (Quizz.Difficult ==enDiff::Hard){
        cout<<"Operation Diff : Hard"<<endl;
    }
    if (Quizz.OpType==enOpType::Sum){
        cout<<"Operation Type : Sum"<<endl;
    } else if (Quizz.OpType ==enOpType::Sub){
        cout<<"Operation Type : Sub"<<endl;
    } else if (Quizz.OpType ==enOpType::Mul){
        cout<<"Operation Type : Mul"<<endl;
    } else if (Quizz.OpType ==enOpType::Div){
        cout<<"Operation Type : Div"<<endl;
    }
    if(Quizz.rightAnswers == Quizz.wrongAnswers || Quizz.rightAnswers>Quizz.wrongAnswers){
        cout<<"Status : You Win"<<endl;
    } else {
        cout<<"Status : You Lose"<<endl;
    }
    cout<<"======================="<<endl;

}
void mOPSum(stQuizz &game,enDiff diff,int i){
    bool rw;
    cout<<"Question ["<<i<<"/"<<game.numberQuestions<<"]"<<endl;
    if (diff== enDiff::Easy){
        rw=mathOperation(randomGenerator(10),randomGenerator(10),'+');
    } else if (diff ==enDiff::Medium){
        rw=mathOperation(randomGenerator(50),randomGenerator(50),'+');
    } else if (diff == enDiff::Hard){
        rw=mathOperation(randomGenerator(100),randomGenerator(100),'+');
    }
    if( rw == true){
        game.rightAnswers++;
    } else {
        game.wrongAnswers++;
    }
}
void mOPSub(stQuizz &game,enDiff diff,int i){
    bool rw;
    cout<<"Question ["<<i<<"/"<<game.numberQuestions<<"]"<<endl;
    if (diff== enDiff::Easy){
        rw=mathOperation(randomGenerator(10),randomGenerator(10),'-');
    } else if (diff ==enDiff::Medium){
        rw=mathOperation(randomGenerator(50),randomGenerator(50),'-');
    } else if (diff == enDiff::Hard){
        rw=mathOperation(randomGenerator(100),randomGenerator(100),'-');
    }
    if( rw == true){
        game.rightAnswers++;
    } else {
        game.wrongAnswers++;
    }
}
void mOPMul(stQuizz &game,enDiff diff,int i){
    bool rw;
    cout<<"Question ["<<i<<"/"<<game.numberQuestions<<"]"<<endl;

    if (diff== enDiff::Easy){
        rw=mathOperation(randomGenerator(10),randomGenerator(10),'*');
    } else if (diff ==enDiff::Medium){
        rw=mathOperation(randomGenerator(50),randomGenerator(50),'*');
    } else if (diff == enDiff::Hard){
        rw=mathOperation(randomGenerator(100),randomGenerator(100),'*');
    }
    if( rw == true){
        game.rightAnswers++;
    } else {
        game.wrongAnswers++;
    }
}
void mOPDiv(stQuizz &game,enDiff diff,int i){
    bool rw;
    cout<<"Question ["<<i<<"/"<<game.numberQuestions<<"]"<<endl;
    if (diff== enDiff::Easy){
        rw=mathOperation(randomGenerator(10),randomGenerator(10),'/');
    } else if (diff ==enDiff::Medium){
        rw=mathOperation(randomGenerator(50),randomGenerator(50),'/');
    } else if (diff == enDiff::Hard){
        rw=mathOperation(randomGenerator(100),randomGenerator(100),'/');
    }
    if( rw == true){
        game.rightAnswers++;
    } else {
        game.wrongAnswers++;
    }
}
void newGame(){
    stQuizz game;
    game.rightAnswers=0;
    game.wrongAnswers=0;
    game.Difficult=pickDifficult();
    game.OpType=pickOperation();
    game.numberQuestions=numberQuestions();
    for (int i =1; i<= game.numberQuestions;i++){
        if (game.Difficult == enDiff::Easy){
            if(game.OpType == enOpType::Sum){
                mOPSum(game,enDiff::Easy,i);
            }
            if(game.OpType == enOpType::Sub){
                mOPSub(game,enDiff::Easy,i);
            }
            if(game.OpType == enOpType::Mul){
                mOPMul(game,enDiff::Easy,i);
            }
            if(game.OpType == enOpType::Div){
                mOPDiv(game,enDiff::Easy,i);
            }
        }
        if (game.Difficult == enDiff::Medium){
            if(game.OpType == enOpType::Sum){
                mOPSum(game,enDiff::Medium,i);
            }
            if(game.OpType == enOpType::Sub){
                mOPSub(game,enDiff::Medium,i);
            }
            if(game.OpType == enOpType::Mul){
                mOPMul(game,enDiff::Medium,i);
            }
            if(game.OpType == enOpType::Div){
                mOPDiv(game,enDiff::Medium,i);
            }
        }
        if (game.Difficult == enDiff::Hard){
            if(game.OpType == enOpType::Sum){
                mOPSum(game,enDiff::Hard,i);
            }
            if(game.OpType == enOpType::Sub){
                mOPSub(game,enDiff::Hard,i);
            }
            if(game.OpType == enOpType::Mul){
                mOPMul(game,enDiff::Hard,i);
            }
            if(game.OpType == enOpType::Div){
                mOPDiv(game,enDiff::Hard,i);
            }
        }
    }
    summary(game);

}

void startGame (){
    char playerInput;
    do {
        newGame();
        cout<<"Do you want play again (y/n) ? :";
        cin>> playerInput;
    } while (playerInput =='y' || playerInput =='Y');
}

int main(){
    srand((unsigned)time(NULL));
    startGame();
}