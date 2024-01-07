
#include<stdio.h>
#include <stdlib.h>
void printTitle(char a[]);
int main()
{
    int choice;
    char c;
    do{
     printTitle("GAMING ARENA");
	printf("\t\t\t WELCOME TO GAMING ARENA \n\n");
    printf("\nSelect a game to play:\n");
    printf("1. QUIZ GAME\n");
    printf("2. RIDDLE GAME\n");
    printf("3. TICTACTOE \n");
    printf("4. ROCKPAPERSCISSORS \n");
    printf("5. GUESSING THE NUMBER GAME \n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            system("Quiz.exe");
            break;
        case 2:
            system("RIDDLEGAME.exe");
            break;
        case 3:
            system("TICTACTOE.exe");
            break;
        case 4:
            system("ROCKPAPERSCISSORS.exe");
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

void printTitle(char a[]) {
    int j = 0,i;
    printf("%c%c", 178, 177); 

    for ( i = 0; i <= strlen(a) + 7; i++)
        printf("%c", 178); 

    printf("%c%c\n", 177, 178); 

    printf("%c%c%c%c%c", 178, 177, 178, 177, 178);
    while (a[j] != '\0') {
        printf("%c", a[j]);
        j++;
   }
    printf("%c%c%c%c%c", 178, 177, 178, 177, 178);
    printf("%c%c\n", 177, 178);

    for ( i = 0; i <= strlen(a) + 7; i++)
        printf("%c", 178);
    printf("%c%c", 178, 177);
    printf("\n");
}