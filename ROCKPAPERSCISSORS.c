#include<stdio.h>
#include<stdlib.h>
int main(){
	//0==Rock, 1==Paper, 2==Scissors
	printf("\n \t\tROCK PAPER SCISSORS GAME! \n");
	printf("lets start! \n");
	int usermove, compmove;
	while(1){
		printf("\nEnter your move: \t (0) for Rock \t (1) for Paper \t (2) for Scissor \t (3) to exit\n");
		scanf("%d", &usermove);
		compmove= rand()%3;      //0,1,2
		if (usermove==3){
            printf("Existing the game..\n");
            break;
		}
        else if(usermove<0 || usermove>2){
            printf("Invalid move! Please choose between 0, 1, 2 or 3 to exit.\n");
            continue;
        }
		else if(usermove==0 && compmove==1){
			printf("Computer chose %d", compmove);
			printf("\nYou lost! \t Paper beats Rock");
		}
		else if(usermove==0 && compmove==2){
			printf("Computer chose %d", compmove);
			printf("\nYou won! \t Rock beats Scissor");
		}
		else if(usermove==1 && compmove==0){
			printf("Computer chose %d", compmove);
			printf("\nYou won! \t Paper beats Rock");
		}
		else if(usermove==1 && compmove==2){
			printf("Computer chose %d", compmove);
			printf("\nYou lost! \t Scissor beats Paper");
		}
		else if(usermove==2 && compmove==0){
			printf("Computer chose %d", compmove);
			printf("\nYou lost! \t Rock beats Scissor");
		}
		else if(usermove==2 && compmove==1){
			printf("Computer chose %d", compmove);
			printf("\nYou won! \t Scissor beats Paper");
		}
		else{
			printf("Computer chose %d", compmove);
			printf("\nIts a draw!");
		}
	}
}