#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
#include<windows.h>
void main()
{
    int you, computer;
    srand(time(0));
    computer = rand() % 3 + 1;
    printf("\t\t\t\t\tRock-Paper-Scissors Game\n");
    printf("Rules:-\n");
    printf("rock=1\n");
    printf("paper=2\n");
    printf("scissors=3\n");
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d", &you);
    if(you==0) {
        Sleep(1000);
        system("cls");
        system("\"Gaming Portal.exe\"");
        return;
    }
    printf("Computer's choice: %d\n", computer);
    if (you == computer)
        printf("It's a tie!");
    else if ((you == 1 && computer == 3) || (you == 2 && computer == 1) || (you == 3 && computer == 2))
        printf("You win!");
    else
        printf("Computer wins!");
}