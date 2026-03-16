#include<bits/stdc++.h>
using namespace std;

class RockPaperScissors {
private:
    int playerScore;
    int compScore;
    int draws;

public:
RockPaperScissors(){
    playerScore = 0;
    compScore = 0;
    draws = 0;
}

char getCompChoice(){
  int num = rand() % 3;
  if(num == 0){
        return 'R';
    }
    else if(num == 1){
        return 'P';
    }
    else{     
        return 'S';
    }
}
string getChoiceName(char c){
    if(c == 'R')
    return "Rock";
    else if(c == 'P')
    return "Paper";
    else 
    return "Scissors";

}

void showScore(){
    cout << "Player: " << playerScore << " " << "Computer: " << compScore << " Draw: " << draws <<endl;
}
void play(){
cout<<"Enter your choice : R / P / S :" ;
    
    char choice;
    cin>>choice;
    choice = toupper(choice);
    
    if(choice == 'R') 
       cout << "You chose: Rock" << endl;
    else if(choice == 'P') 
       cout << "You chose: Paper" << endl;
    else if(choice == 'S') 
       cout << "You chose: Scissors" << endl;
    else
       cout<<"Invalid choice!" << endl;
    
    char compChoice = getCompChoice();
     
    if(compChoice == 'R')
    cout << "Computer chose : Rock" <<endl;
    else if(compChoice == 'P')
    cout << "Computer chose : Paper" << endl;
    else 
    cout << "Computer chose : Scissors" << endl;
    

    if(choice == 'R' && compChoice == 'S'){
       cout << "Player wins" << endl;
       playerScore++;
    }
    else if(choice == 'S' && compChoice == 'P'){
       cout << "Player wins" << endl;
       playerScore++;
    }
    else if(choice == 'P' && compChoice == 'R'){
       cout << "Player wins" << endl;
       playerScore++;
    }
    else if(choice == 'S' && compChoice == 'R'){
       cout << "Computer wins" << endl;
       compScore++;
    }
    else if(choice == 'P' && compChoice == 'S'){
       cout << "Computer wins" << endl;
       compScore++;
    }
    else if(choice == 'R' && compChoice == 'P'){
       cout << "Computer wins" << endl;
       compScore++;
    }
    else{
       cout << "Draw" << endl;
       draws++;
    }

}
    
};
 
int main(){
    srand(time(0)); 
    RockPaperScissors game;    
    char c = 'Y';

    while(c != 'N'){
    game.play();
    cout << "Play again? (Y/N): " <<endl;
    cin >> c;
    c = toupper(c);
    }
    game.showScore();
    
return 0;

}