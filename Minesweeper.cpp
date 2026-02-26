#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int i, j, p1, p2, random[6], col = 0, Series[] = {11, 12, 13, 14, 15, 21, 22, 23, 24, 25, 31, 32, 33, 34, 35, 41, 42, 43, 45, 51, 52, 53, 54, 55}, count;
    char board[6][6],p1d[100];
    printf("\t\t\t\tWELCOME ");
     Sleep(1000);
     printf("TO ");
      Sleep(1000);
     printf("THE ");
      Sleep(1000);
     printf("CHECKERS ");
       Sleep(1000);
     printf("GAME\n ");
    Sleep(1000);
    printf("\t\t\t\t\t\t\t--DEVELOPED BY :- KSHITIJ PAWAR\n");
    Sleep(1000);
    count = sizeof(Series) / sizeof(Series[0]);
    srand(time(NULL));

    for (int k = 0; k < 5; k++)
    {
        
        random[k] = Series[rand() % count]; 
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            board[i][j] = '*';
        }
    }
    count=0;
    while (col < 1000)
    {
        for (i = 0; i < 5; i++)
        {
            printf("\n");
            printf("%d\t", i + 1);
            for (j = 0; j < 5; j++)
            {
                printf("\t%c", board[i][j]);
            }
        }
        printf("\n\n\t");
        for (i = 1; i < 6; i++)
        {
            printf("\t%d", i);
        }
          
    ret:
        printf("\nPLAYER ENTER PLACE:");
        scanf("%d", &p1);
 printf("%d",count);
                   if(count==5)
           { printf("\nYOU TRIGGERED 5 BOMBS");printf("\nGAME OVER......!\n BETTER LUCK NEXT TIME.....");
           goto end;
           }
        p1d[11] = board[0][0];
        p1d[12] = board[0][1];
        p1d[13] = board[0][2];
        p1d[14] = board[0][3];
        p1d[15] = board[0][4];
        p1d[21] = board[1][0];
        p1d[22] = board[1][1];
        p1d[23] = board[1][2];
        p1d[24] = board[1][3];
        p1d[25] = board[1][4];
        p1d[31] = board[2][0];
        p1d[32] = board[2][1];
        p1d[33] = board[2][2];
        p1d[34] = board[2][3];
        p1d[35] = board[2][4];
        p1d[41] = board[3][0];
        p1d[42] = board[3][1];
        p1d[43] = board[3][2];
        p1d[44] = board[3][3];
        p1d[45] = board[3][4];
        p1d[51] = board[4][0];
        p1d[52] = board[4][1];
        p1d[53] = board[4][2];
        p1d[54] = board[4][3];
        p1d[55] = board[4][4];
            if (p1 == 11)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[0][0] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[0][0] = '0'; 
                count++;
            }
                else if (board[0][0] == '*')
                    board[0][0] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
        else if (p1 == 12)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[0][1] == '*'){
               printf("\nYOU TRIGGERED A BOMB");
                board[0][1] = 'O'; 
                 count++;
            }
                else if (board[0][1] == '*')
                    board[0][1] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
        else if (p1 == 13)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[0][2] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[0][2] = '0'; 
                 count++;
            }
                else if (board[0][2] == '*')
                    board[0][2] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
        else if (p1 == 14)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[0][3] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[0][3] = '0';
                 count++;}
                else if (board[0][3] == '*')
                    board[0][3] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
        else if (p1 == 15)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[0][4] == '*'){
               printf("\nYOU TRIGGERED A BOMB");
                board[0][4] = '0'; 
                 count++;
            }
                else if (board[0][4] == '*')
                    board[0][4] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
        else if (p1 == 21)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[1][0] == '*'){
               printf("\nYOU TRIGGERED A BOMB");
                board[1][0] = '0';
                 count++;}
                else if (board[1][0] == '*')
                    board[1][0] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
        else if (p1 == 22)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[1][1] == '*'){
               printf("\nYOU TRIGGERED A BOMB");
                board[1][1] = '0';
                 count++;}
                else if (board[1][1] == '*')
                    board[1][1] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
        else if (p1 == 23)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[1][2] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[1][2] = '0';
                 count++;}
                else if (board[1][2] == '*')
                    board[1][2] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
        else if (p1 == 24)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[1][3] == '*'){
                 printf("\nYOU TRIGGERED A BOMB");
                board[1][3] = '0'; 
                 count++;
            }
                else if (board[1][3] == '*')
                    board[1][3] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 25)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[1][4] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[1][4] = '0'; 
                 count++;
            }
                else if (board[1][4] == '*')
                    board[1][4] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
        else if (p1 == 31)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[2][0] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[2][0] = '0';
                 count++;}
                else if (board[2][0] == '*')
                    board[2][0] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 32)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[2][1] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[2][1] = '0';
                 count++;}
                else if (board[2][1] == '*')
                    board[2][1] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 33)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[2][2] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[2][2] = '0'; 
                 count++;
            }
                else if (board[2][2] == '*')
                    board[2][2] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 34)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[2][3] == '*'){
               printf("\nYOU TRIGGERED A BOMB");
                board[2][3] = '0'; 
                 count++;
            }
                else if (board[2][3] == '*')
                    board[2][3] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 35)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[2][4] == '*'){
               printf("\nYOU TRIGGERED A BOMB");
                board[2][4] = '0';
                 count++;}
                else if (board[2][4] == '*')
                    board[2][4] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 41)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[3][0] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[3][0] = '0';
                 count++;}
                else if (board[3][0] == '*')
                    board[3][0] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 42)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[3][1] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[3][1] = '0';
                 count++;
            }
                else if (board[3][1] == '*')
                    board[3][1] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 43)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[3][2] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[3][2] = '0';
                 count++;}
                else if (board[3][2] == '*')
                    board[3][2] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 44)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[3][3] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[3][3] = '0'; 
                 count++;
            }
                else if (board[3][3] == '*')
                    board[3][3] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 45)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[3][4] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[3][4] = '0';
                 count++;}
                else if (board[3][4] == '*')
                    board[3][4] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 51)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[4][0] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[4][0] = '0'; 
                 count++;
            }
                else if (board[4][0] == '*')
                    board[4][0] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 52)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[4][1] == '*'){
                 printf("\nYOU TRIGGERED A BOMB");
                board[4][1] = '0';
                 count++;}
                else if (board[4][1] == '*')
                    board[4][1] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 53)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[4][2] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[4][2] = '0';
                 count++;}
                else if (board[4][2] == '*')
                    board[4][2] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 54)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[4][3] == '*'){
                 printf("\nYOU TRIGGERED A BOMB");
                board[4][3] = '0';  count++;}
                else if (board[4][3] == '*')
                    board[4][3] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
            else if (p1 == 55)
            {if((random[0]==p1||random[1]==p1||random[2]==p1||random[3]==p1||random[4]==p1)&&board[4][4] == '*'){
                printf("\nYOU TRIGGERED A BOMB");
                board[4][4] = '0'; count++; }
                else if (board[4][4] == '*')
                    board[4][4] = 'X';
                else
                {
                    printf("PLACE ALREADY OCCUPIED REENTER");
                    goto ret;
                }
            }
    }
    end:
    return 0;
}