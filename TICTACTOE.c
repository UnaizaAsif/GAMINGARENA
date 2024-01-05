#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
void resetboard();
void printboard();
int checkfreespace();
void playermove();
void compmove();
char checkwinner();
void printwinner(char);

char board[3][3];
const char player='X';
const char comp= 'O';

int main(){
	char winner=' ';
	char response=' ';
	printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
	do{
		winner=' ';
		response=' ';
		resetboard();
	while(winner== ' ' && checkfreespace() !=0){
	
	printboard();
	playermove();
	winner=checkwinner();
	if(winner!=' ' || checkfreespace()==0 ){
	break;}
	 
   compmove();
    winner=checkwinner();
	if(winner!=' ' || checkfreespace()==0 ){
	break;}
}
   printboard();
   printwinner(winner);
   printf("Would you like to play again? (Y/N):  \n");
   scanf(" %c",&response);
   
   }while(response=='Y' || response=='y');
   	printf("Thanks for playing: \n");
   	return 0;
}

void resetboard(){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			board[i][j]=' ';
		}}}
	
void printboard(){ 
    system("cls");
    printf("\n\n\t TIC TAC TOE \n\n");
    printf("PLAYER= 'X'  -  COMPUTER= 'Y'\n\n\n");
	printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
	printf("\n___|___|___\n");
	printf(" %c | %c | %c ",board[1][0],board[1][1],board[1][2]);
    printf("\n___|___|___\n");
	printf(" %c | %c | %c",board[2][0],board[2][1],board[2][2]);
	printf("\n");}
	
	
int checkfreespace(){
	int i,j,freespace=9;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(board[i][j]!=' '){
			
			freespace--;
		}
	  }
	}
	return freespace;}
	
	
void playermove(){
	int x,y;
	do{
		printf("Enter row(1-3): \n");
		scanf("%d",&x);
		x--;
		printf("Enter column(1-3): \n");
		scanf("%d",&y);
		y--;
		if(board[x][y]!=' '){
			printf("Invallid move \n");
		}
		else{
			board[x][y]=player;
			break;
		}
	}while(board[x][y]!=' ');}
	
void compmove(){
	srand(time(0));
	int x,y;
	if(checkfreespace()>0){
		do{
			x=rand()%3;
			y=rand()%3;	
		}while(board[x][y]!=' ');
		board[x][y]=comp;
	}else{
		printwinner(' ');
	}}
char checkwinner(){
	int i;
	for(i=0;i<3;i++){//for rows
		if(board[i][0]==board[i][1] && board[i][0]==board[i][2]){
		return board[i][0];
	}
}
    for(i=0;i<3;i++){//for coloumn
		if(board[0][i]==board[1][i] && board[0][i]==board[2][i]){
		return board[0][i];
	}
}
	//for diagonal 1
	if(board[0][0]==board[1][1] && board[0][0]==board[2][2]){
		return board[0][0];
	}
	if(board[0][2]==board[1][1] && board[0][2]==board[2][0]){
		return board[0][2];
	}
	
	return ' ';
}


void printwinner(char winner){
	if (winner== player){
		printf("You won! \n");
	}
	else if(winner==comp){
		printf("You lose \n");
	}
	else{
		printf("Its a tie \n");
	}
}