#include <stdio.h>
#include <windows.h>
int main()
{
    int i;
    printf("\t\t\t\tWELCOME ");
    Sleep(1000);
    printf("TO ");
    Sleep(1000);
    printf("THE ");
    Sleep(1000);
    printf("GAMING ");
    Sleep(1000);
    printf("PORTAL\n ");
    Sleep(1000);
    printf("\t\t\t\t\t\t\t--DEVELOPED BY :- KSHITIJ PAWAR\n");
    Sleep(2000);
    printf("Select the game you want to play\n");
    Sleep(1000);
    printf("1. 3x3 2048 Game\n");
    Sleep(1000);
    printf("2. 5x5 2048 Game\n");
    Sleep(1000);
    printf("3. Tic Tac Toe Game\n");
    Sleep(1000);
    printf("4. Number Guessing Game\n");
    Sleep(1000);
    printf("5. Dic Rolling Game\n");
    Sleep(1000);
    printf("6. Rock Paper Scissors Game\n");
    Sleep(1000);
    printf("7. Minesweeper Game\n");
    Sleep(1000);
    printf("8. Capture the Pawn \n");
    Sleep(1000);
    printf("9. Word Guessing Game\n");
    Sleep(1000);
    printf("10.Flirting Lines Generator \n");
    Sleep(1000);
    printf("Enter the number of the game you want to play:");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        system("cls");
        system("helloworld.exe");
        break;
    case 2:
        system("cls");
        system("\"2048 game.exe\"");
        break;
    case 3:
        system("cls");
        system("\"Tic tac.exe\"");
        break;
    case 4:
        system("cls");
        system("\"number guessing.exe\"");
        break;
    case 5:
        system("cls");
        system("\"dice rolling.exe\"");
        break;
    case 6:
        system("cls");
        system("\"rock paper scissors.exe\"");
        break;
    case 7:
        system("cls");
        system("\"Minesweeper.exe\"");
        break;
    case 8:
        system("cls");
        system("\"Capture the Pawn.exe\"");
        break;
    case 9:
        system("cls");
        system("\"wordguessing.exe\"");
        break;
    case 10:
        system("cls");
        system("\"flirting lines.exe\"");
        break;
    default:
        printf("Invalid choice. Please try again.\n");
    }
    return 0;
}