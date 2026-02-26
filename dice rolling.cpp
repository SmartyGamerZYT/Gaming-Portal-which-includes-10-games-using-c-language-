#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void main()
{
    int i, n ,diceroll;
    printf("\t\t\t\t\tDice\t");
    Sleep(1000);
    printf("Rolling\t");
    Sleep(1000);
    printf("Game\n");
    printf("\t\t\t\t\t\t\t\t--DEVELOPER:- KSHITIJ\n\n");
    Sleep(1000);
    printf("Enter the number of times to roll the dice: ");
    scanf("%d", &n);
    if(n='exit')
    {
        system("cls");
       system("\"Gaming Portal.exe\"");
    }
    srand(time(0)); 
    for(i = 0; i < n; i++)
    {
        diceroll = (rand() % 6) + 1; 
        Sleep(500);
        printf("Roll %d: %d\n", i + 1, diceroll);
    }
}