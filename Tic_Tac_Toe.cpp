#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int board[3][3];

int main() {

srand(time(NULL))

int row, col;
int StartChoice;
int ComputerTurn;
int ComputerRow = rand() % 2;
int ComputerCol = rand() % 2;
int Xscore = 0;
int Oscore = 0;
bool Game = true;

cout<<"Type 1 to play, 2 to quit...\n";
cin>>StartChoice;

if (StartChoice==1){

while(Game = true){

  void Player() {
    cout<<"Enter Row you would like to play: ";
    cin>>row;
    cout<<"\n";
    cout<<"Enter Column you would like to play: ";
    cin>>col;
    cout<<"\n";

   if(board[row][col]=='')
  {
    board[row][col]=='X';
  }
  else
  {
    cout<<"Invalid move\n";
    this->Player();
  }


  void ComputerTurn() {
    cout<<"Computer is making a move\n";
    int ComputerRow = rand() % 2;
    int ComputerCol = rand() % 2;

    cin>>ComputerRow;
    cin>>ComputerCol;

  if(ComputerRow = 0)
  {
    ComputerRow = 1;
  }

  if(ComputerCol = 0)
  {
    ComputerCol = 1;
  }
  if(ComputerRow = 1)
  {
    ComputerRow = 2;
  }

  if(ComputerCol = 1)
  {
    ComputerCol = 2;
  }
  if(ComputerRow = 2)
  {
    ComputerRow = 3;
  }

  if(ComputerCol = 2)
  {
    ComputerCol = 3;
  }

   if(board[ComputerRow][ComputerCol]=='')
   {
     board[ComputerRow][ComputerCol]=='O';
   }
   else
   {
     this->ComputerTurn;
   }

 if ((board[1][1]=='X' && board[2][1]=='X' && board[3][1]=='X') || (board[1][2]=='X' && board[2][2]=='X' && board[3][2]=='X') || (board[1][3]=='X' && board[2][3]=='X' && board[3][3]=='X') || (board[1][1]=='X' && board[1][2]=='X' && board[1][3]=='X') || (board[2][1]=='X' && board[2][2]=='X' && board[2][3]=='X') || (board[3][1]=='X' && board[3][2]=='X' && board[3][3]=='X') || (board[1][1]=='X' && board[2][2]=='X' && board[3][3]=='X') || (board[1][3]=='X' && board[2][2]=='X' && board[3][1]=='X'))
 {
   Game = false;
   cout<<"You win!\n";
 }
 else if ((board[1][1]=='O' && board[2][1]=='O' && board[3][1]=='O') || (board[1][2]=='O' && board[2][2]=='O' && board[3][2]=='O') || (board[1][3]=='O' && board[2][3]=='O' && board[3][3]=='O') || (board[1][1]=='O' && board[1][2]=='O' && board[1][3]=='O') || (board[2][1]=='O' && board[2][2]=='O' && board[2][3]=='O') || (board[3][1]=='O' && board[3][2]=='O' && board[3][3]=='O') || (board[1][1]=='O' && board[2][2]=='O' && board[3][3]=='O') || (board[1][3]=='O' && board[2][2]=='O' && board[3][1]=='O'))
 {
   Game = false;
   cout<<"You lose :(\n";
 }
 else
 {
   Game = true;
 }
}

  }
  if (StartChoice == 2) {
    Game = false;
  }
return 0;
}
