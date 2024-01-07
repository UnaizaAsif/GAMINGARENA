
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    char c;
    do{
  
	printf("\t\t\t WELCOME TO GAMING ARENA \n\n");
    printf("\nSelect a game to play:\n");
    printf("1. QUIZ GAME\n");
    printf("2. TICTACTOE \n");
    printf("3. ROCK PAPER SCISSOR \n");
    printf("4. GUESSING THE NUMBER GAME \n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            system("Quiz.exe");
            break;
        
        case 2:
            system("TICTACTOE.exe");
            break;
        case 3:
            system("ROCKPAPERSCISSORS.exe");
            break;
        case 4:
           system("guessinggame.exe");
           break;
        default:
            printf("Invalid choice.\n");
            
    }
    printf("\nDo you want to continue(Y/N):");
    scanf(" %c",&c);
}while(c=='Y');
printf("\n THE END! \n");

    return 0;
}

