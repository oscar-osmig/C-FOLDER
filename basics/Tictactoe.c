#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void clearScreen(){
      #ifdef _WIN32
            system("cls");
      #else 
            system("clear"); 
      #endif
}

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);


int main(){
      clearScreen();
      char winner = ' '; 

      resetBoard();

      while (winner == ' ' && checkFreeSpaces() != 0)
      {     
            clearScreen();
            printBoard();

            playerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0){
                  break;
            }

            computerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0){
                  break;
            }
      }
      
      clearScreen();
      printBoard();
      printWinner(winner);
      return 0;
}

void resetBoard(){
      int i, j;
      for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                  board[i][j] = ' ';
            }
      }
}


void printBoard(){
      printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
      printf("---|---|---\n");
      printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
      printf("---|---|---\n");
      printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
      printf("\n");
}

int checkFreeSpaces(){
      int freeSpaces = 9;
      int i, j;
      for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                  if(board[i][j] != ' '){
                        freeSpaces--;
                  }
            }
      }
      return freeSpaces;
}

void playerMove(){
      int x, y;

      do
      {
            printf("Enter the row #(1-3): ");
            scanf("%d", &x);
            x--;
            printf("Enter the column #(1-3): ");
            scanf("%d", &y);
            y--;

            if(board[x][y] != ' '){
                  printf("Invalid move, try again.\n");
            //playerMove();
            }else{
                  board[x][y] = PLAYER;
                  break;
            }
      } while (board[x][y] != ' ');
      

}

void computerMove(){
      // create a seed for the random number generator
      srand(time(0));
      int x, y;

      if (checkFreeSpaces() > 0)
      {
            do
            {
                  x = rand() % 3;
                  y = rand() % 3;

            } while (board[x][y] != ' ');

            board[x][y] = COMPUTER;
      }else{
            printWinner(' ');
      }
}

char checkWinner(){
      // check rows
      for(int i = 0; i < 3; i++){
            if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){
                  return board[i][0];
            }
      }

      // check columns
      for(int i = 0; i < 3; i++){
            if(board[0][i] == board[1][i] && board[1][i] == board[2][i]){
                  return board[0][i];
            }
      }
      // check diagonals
      if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
            return board[0][0];
      }
      if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
            return board[0][2];
      }

      return ' ';
}

void printWinner(char winner){
      if (winner == PLAYER)
      {
            printf("Player wins!\n");
      }
      else if (winner == COMPUTER)
      {
            printf("Computer wins!\n");
      } 
      else{ 
            printf("It's a tie!\n");
      }
      
}
