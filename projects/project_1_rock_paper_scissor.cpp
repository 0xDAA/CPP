#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

enum enRockPaperScissor{Rock=1,Paper=2,Scissor=3};

struct stGameStatus{
    int draw=0;
    int humanWin=0;
    int computerWin=0;
    int rounds=0;
};

int readNumberOfRounds(){
    int nor;
    do {
        cout<<"Enter number of rounds 1 to 10 : ";
        cin>>nor;
    } while (nor<=0 || nor >10);
    return nor;
}

enRockPaperScissor computerChoice(){
    int choice = rand()%3+1;
    return (enRockPaperScissor)choice ;
}

void NewGame(){
    system ("color 00");

    stGameStatus game;
    int playerInput;
    enRockPaperScissor playerChoice;
    enRockPaperScissor cpuChoice;
    game.computerWin=game.humanWin=game.draw=0;
    game.rounds=readNumberOfRounds();
    for (int i=1; i<=game.rounds;i++){
        cout<<"======= Round ["<<i<<"] ======="<<endl;
        cout<<"Choose : [1] Rock - [2] Paper - [3] Scissor : ";
        cin>>playerInput;
        playerChoice=(enRockPaperScissor)playerInput;
        cpuChoice= computerChoice();
        if (playerChoice == cpuChoice){
            system ("color 6f");
            cout<<"_____Round ["<<i<<"]_____ :"<<endl;
            cout<<"Winner is : Draw (No Winner)"<<endl;
            cout<<"___________________"<<endl;
            game.draw++;
        } else if( cpuChoice == enRockPaperScissor::Rock && playerChoice== enRockPaperScissor::Scissor){
            system ("color cf");
            cout<<"_____Round ["<<i<<"]_____ :"<<endl;
            cout<<"Player Choice : Scissor "<<endl;
            cout<<"CPU Choice : Rock "<<endl;
            cout<<"Winner is : CPU"<<endl;
            cout<<"___________________"<<endl;
            game.computerWin++;
        } else if ( cpuChoice == enRockPaperScissor::Scissor && playerChoice == enRockPaperScissor::Rock){
            system ("color 2f");
            cout<<"_____Round ["<<i<<"]_____ :"<<endl;
            cout<<"Player Choice : Rock "<<endl;
            cout<<"CPU Choice : Scissor "<<endl;
            cout<<"Winner is : Human"<<endl;
            cout<<"___________________"<<endl;
            game.humanWin++;
        } else if ( cpuChoice == enRockPaperScissor::Paper && playerChoice == enRockPaperScissor::Rock){
            system ("color cf");
            cout<<"_____Round ["<<i<<"]_____ :"<<endl;
            cout<<"Player Choice : Rock "<<endl;
            cout<<"CPU Choice : Paper "<<endl;
            cout<<"Winner is : CPU"<<endl;
            cout<<"___________________"<<endl;
            game.computerWin++;
        } else if ( cpuChoice == enRockPaperScissor::Rock && playerChoice == enRockPaperScissor::Paper){
            system ("color 2f");
            cout<<"_____Round ["<<i<<"]_____ :"<<endl;
            cout<<"Player Choice : Paper "<<endl;
            cout<<"CPU Choice : Rock "<<endl;
            cout<<"Winner is : Human"<<endl;
            cout<<"___________________"<<endl;
            game.humanWin++;
        } else if (cpuChoice == enRockPaperScissor::Scissor && playerChoice == enRockPaperScissor::Paper){
            system ("color cf");
            cout<<"_____Round ["<<i<<"]_____ :"<<endl;
            cout<<"Player Choice : Paper "<<endl;
            cout<<"CPU Choice : Scissor "<<endl;
            cout<<"Winner is : CPU"<<endl;
            cout<<"___________________"<<endl;
            game.computerWin++;
        } else if (cpuChoice == enRockPaperScissor::Paper && playerChoice == enRockPaperScissor::Scissor){
            system ("color 2f");
            cout<<"_____Round ["<<i<<"]_____ :"<<endl;
            cout<<"Player Choice : Scissor "<<endl;
            cout<<"CPU Choice : Paper "<<endl;
            cout<<"Winner is : Human"<<endl;
            cout<<"___________________"<<endl;
            game.humanWin++;
        }
    }
    cout<<"==================================="<<endl;
    cout<<"========  G a m e O v e r  ========"<<endl;
    cout<<"==================================="<<endl;
    cout<<"____________Game Result____________"<<endl;
    cout<<"Total Rounds : "<<game.rounds<<endl;
    cout<<"Player Won Times : "<<game.humanWin<<endl;
    cout<<"Computer Won Times : "<<game.computerWin<<endl;
    cout<<"Draw Times : "<<game.draw<<endl;
    if (game.rounds== game.draw || game.computerWin == game.humanWin){
        system ("color 6f");
        cout<<"No Final Winner (Draw)"<<endl;
    } else if (game.humanWin > game.computerWin){
        system ("color 2f");
        cout<<"Final Winner : Player (Human)"<<endl;
    } else {
        cout<<"Final Winner : CPU (Computer)"<<endl;
        system ("color cf");

    }
    cout<<"__________________________________"<<endl;
}

void startGame(){
    char userChoice;
    do {
        NewGame();
        cout<<"Do you want play again ? (Y/N) : ";
        cin>>userChoice;
    } while(userChoice == 'y' || userChoice =='Y');
}
int main(){
    srand((unsigned)time(NULL));
    startGame();
}