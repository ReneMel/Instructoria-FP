#include <stdio.h>
#include <stdlib.h>

char fillBoard();
void printBoard(char Board[3][3]);
int  isdraw();
char winningmove(char Board[3][3], int i, int j);

int main(){

  char Board[3][3];
  char winner = '\0';
  int row=0;
  int col=0;
  char turn = 'X';

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      Board[i][j]=' ';
    }
  }


  do{
    printBoard(Board);

    printf("Haga su movimiento jugador %c :\n", turn );
    printf("Columna: ");
    scanf("%o", &col);
    printf("Fila: ");
    scanf("%o", &row);

    int rowind = row - 1;
      int colind = col - 1;
      
      if (Board[rowind][colind] == ' ') {
          Board[rowind][colind] = turn;
       if (turn == 'X') {
      turn = 'O';
        } else {
      turn = 'X';
        }

        winner = winningmove(Board, rowind, colind);

    } else {
        printf("Square occupied; try again.\n");
    }


  }while(!winner && !isdraw(Board));
    if (turn == 'X') {
      turn = 'O';
        } else {
      turn = 'X';
        }
          printBoard(Board);
  printf("ganador Jugador  %c :\n", turn );

}




void printBoard(char Board[3][3]) {
  printf(" |1|2|3|\n");
  for(int i = 0; i < 3; i++) {
    printf("%o|",  i+1);
    for(int j = 0; j < 3; j++) {
      printf("%c|",  Board[i][j]);
    }
    printf("\n");
  }
}


int isdraw(char Board[3][3]) {
  for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 3; ++j) {
      if (Board[i][j] == ' ') {

        return 0;
      }
    }
  }

  return 1;
}

char winningmove(char Board[3][3], int i, int j) {
  if (Board[i][j] == Board[i][(j+1)%3]
   && Board[i][j] == Board[i][(j+2)%3])
  {
    // Columna
    return Board[i][j];
  }
  else if (Board[i][j] == Board[(i+1)%3][j]
          && Board[i][j] == Board[(i+2)%3][j])
  {
    // Fila
    return Board[i][j];
  }
  else if (i == j && Board[i][j] == Board[(i+1)%3][(j+1)%3]
                  && Board[i][j] == Board[(i+2)%3][(j+2)%3])
  {++
    // Diagonal
    return Board[i][j];
  }
  else if (i+j == 2 && Board[i][j] == Board[(i+2)%3][(j+1)%3]
                    && Board[i][j] == Board[(i+1)%3][(j+2)%3])
  {
    // Diagonal Reversa
    return Board[i][j];
  }
  else {
    //  Nada
    return 0;
  }
}