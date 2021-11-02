#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'
#define COMPUTER 1
#define HUMAN 2
#define SIZE 3


void showBoard(char board[][SIZE])
{
    printf("\n\n");
      
    printf("\t\t\t  %c | %c  | %c  \n", board[0][0],
                             board[0][1], board[0][2]);
    printf("\t\t\t--------------\n");
    printf("\t\t\t  %c | %c  | %c  \n", board[1][0],
                             board[1][1], board[1][2]);
    printf("\t\t\t--------------\n");
    printf("\t\t\t  %c | %c  | %c  \n\n", board[2][0],
                             board[2][1], board[2][2]);
   
    return;
}

void startGame(char board[][SIZE] , int moves[])
{
    srand(time(NULL)); 
    for(int i = 0; i <SIZE;i++)
    {
        for(int j = 0; j <SIZE;j++)
        {
            board[i][j]=' ';
        } 
    }

    for(int i=0; i <SIZE*SIZE;i++)
    {
        moves[i] = i;
    }
     random_shuffle(moves, moves + SIZE*SIZE);
     showBoard(board);
}

void playTicktock(int turn){
    char board[SIZE][SIZE];
    int moves[SIZE*SIZE];
    startGame(board,moves);
}



int main(int argc, char const *argv[])
{
    
    playTicktock(COMPUTER);
    return 0;
}

