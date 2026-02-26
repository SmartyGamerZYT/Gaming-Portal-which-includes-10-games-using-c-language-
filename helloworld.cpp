#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
    int board[4][4], i=0, j=0, col,high=2;
    char key[4];
    printf("\t\t\t\t\t\t2048 Game\n");
    Sleep(1000);
    printf("\t\t\t\t\t\t\t\t--DEVELOPER:- KSHITIJ\n\n");
    Sleep(1000);
    printf("Rules:");
        Sleep(1000);
    printf("\nUP-->u(column no.) eg:-u1,u2,u3.");
    Sleep(1000);
        printf("\nDOWN-->d(column no.) eg:-d1,d2,d3.");
    Sleep(1000);
        printf("\nLEFT-->l(row no.) eg:-l1,l2,l3.");
    Sleep(1000);
    printf("\nRIGHT-->r(row no.) eg:-r1,r2,r3.\n\n");
    Sleep(1000);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = 2;
        }
    }
    for (i = 0; i < 3; i++)
    {
        Sleep(100);
        printf("\n\t\t\t\t\t\t");
        for (j = 0; j < 3; j++)
        {
            Sleep(100);
            printf("%d\t", board[i][j]);
        }
    }
    for (col = 1; col < 1000; col++)
    {
        Sleep(500);
        printf("\nHIGH SCORE: %d", high);
        Sleep(500);
        printf("\n\nYOUR MOVE: ");
        scanf("%s", &key);
        if (strcmp(key, "exit") == 0)
        {
            system("cls");
        system("\"Gaming Portal.exe\"");}
        if (strcmp(key, "u1") == 0 || strcmp(key, "u2") == 0 || strcmp(key, "u3") == 0 || strcmp(key, "d1") == 0 || strcmp(key, "d2") == 0 || strcmp(key, "d3") == 0 || strcmp(key, "l1") == 0 || strcmp(key, "l2") == 0 || strcmp(key, "l3") == 0 || strcmp(key, "r1") == 0 || strcmp(key, "r2") == 0 || strcmp(key, "r3") == 0)
        {
            if (strcmp(key, "u1") == 0)
            {
                if (board[0][0] == board[1][0])
                {
                    board[0][0] = board[0][0] + board[1][0];
                    board[1][0] = board[2][0];
                    board[2][0] = 2;
                }
                else if (board[1][0] == board[2][0])
                {
                    board[1][0] = board[1][0] + board[2][0];
                    board[2][0] = 2;
                }
            }

            if (strcmp(key, "u2") == 0)
            {
                if (board[0][1] == board[1][1])
                {
                    board[0][1] = board[0][1] + board[1][1];
                    board[1][1] = board[2][1];
                    board[2][1] = 2;
                }
                else if (board[1][1] == board[2][1])
                {
                    board[1][1] = board[1][1] + board[2][1];
                    board[2][1] = 2;
                }
            }

            if (strcmp(key, "u3") == 0)
            {
                if (board[0][2] == board[1][2])
                {
                    board[0][2] = board[0][2] + board[1][2];
                    board[1][2] = board[2][2];
                    board[2][2] = 2;
                }
                else if (board[1][2] == board[2][2])
                {
                    board[1][2] = board[1][2] + board[2][2];
                    board[2][2] = 2;
                }
            }

            if (strcmp(key, "d1") == 0)
            {
                if (board[1][0] == board[2][0])
                {
                    board[2][0] = board[1][0] + board[2][0];
                    board[1][0] = board[0][0];
                    board[0][0] = 2;
                }
                else if (board[1][0] == board[0][0])
                {
                    board[1][0] = board[1][0] + board[0][0];
                    board[0][0] = 2;
                }
            }

            if (strcmp(key, "d2") == 0)
            {
                if (board[1][1] == board[2][1])
                {
                    board[2][1] = board[1][1] + board[2][1];
                    board[1][1] = board[0][1];
                    board[0][1] = 2;
                }
                else if (board[1][1] == board[0][1])
                {
                    board[1][1] = board[1][1] + board[0][1];
                    board[0][1] = 2;
                }
            }

            if (strcmp(key, "d3") == 0)
            {
                if (board[1][2] == board[2][2])
                {
                    board[2][2] = board[1][2] + board[2][2];
                    board[1][2] = board[0][2];
                    board[0][2] = 2;
                }
                else if (board[1][2] == board[0][2])
                {
                    board[1][2] = board[1][2] + board[0][2];
                    board[0][2] = 2;
                }
            }

            if (strcmp(key, "l1") == 0)
            {
                if (board[0][0] == board[0][1])
                {
                    board[0][0] = board[0][0] + board[0][1];
                    board[0][1] = board[0][2];
                    board[0][2] = 2;
                }
                else if (board[0][1] == board[0][2])
                {
                    board[0][1] = board[0][1] + board[0][2];
                    board[0][2] = 2;
                }
            }

            if (strcmp(key, "l2") == 0)
            {
                if (board[1][0] == board[1][1])
                {
                    board[1][0] = board[1][0] + board[1][1];
                    board[1][1] = board[1][2];
                    board[1][2] = 2;
                }
                else if (board[1][1] == board[1][2])
                {
                    board[1][1] = board[1][1] + board[1][2];
                    board[1][2] = 2;
                }
            }

            if (strcmp(key, "l3") == 0)
            {
                if (board[2][0] == board[2][1])
                {
                    board[2][0] = board[2][0] + board[2][1];
                    board[2][1] = board[2][2];
                    board[2][2] = 2;
                }
                else if (board[2][1] == board[2][2])
                {
                    board[2][1] = board[2][1] + board[2][2];
                    board[2][2] = 2;
                }
            }

            if (strcmp(key, "r1") == 0)
            {
                if (board[0][1] == board[0][2])
                {
                    board[0][2] = board[0][1] + board[0][2];
                    board[0][1] = board[0][0];
                    board[0][0] = 2;
                }
                else if (board[0][1] == board[0][0])
                {
                    board[0][1] = board[0][1] + board[0][0];
                    board[0][0] = 2;
                }
            }

            if (strcmp(key, "r2") == 0)
            {
                if (board[1][1] == board[1][2])
                {
                    board[1][2] = board[1][1] + board[1][2];
                    board[1][1] = board[1][0];
                    board[1][0] = 2;
                }
                else if (board[1][1] == board[1][0])
                {
                    board[1][1] = board[1][1] + board[1][0];
                    board[1][0] = 2;
                }
            }

            if (strcmp(key, "r3") == 0)
            {
                if (board[2][1] == board[2][2])
                {
                    board[2][2] = board[2][1] + board[2][2];
                    board[2][1] = board[2][0];
                    board[2][0] = 2;
                }
                else if (board[2][1] == board[2][0])
                {
                    board[2][1] = board[2][1] + board[2][0];
                    board[2][0] = 2;
                }
            }
        }
        else
        {
            printf("\n\t\t\t\t\tWRONG MOVE RETRY\n");
        }

        for (i = 0; i < 3; i++)
        {
            printf("\n\t\t\t\t\t\t");
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", board[i][j]);
            }
        }
    }
    return 0;
}