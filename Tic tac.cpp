#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
int main()
{
    int i,j, places[4][4],count=1,p1,p2,loop,p1d[20];
    char board[4][4];
    for (i = 0; i < 3 ;i++)
    {
        for (j = 0; j < 3; j++)
        {
            places[i][j]=count++;
        }
    }
    printf("\t\t\t\t\tTic-tac-toe Game\n");
    Sleep(2000);
    printf("\n\t\t\t\t\t\t\t--Designed by Kshitij--\n");
    Sleep(2000);
    printf("Enter the Place number as shown below\n");
    for (i = 0; i < 3 ;i++)
    {
        printf("\n\t\t\t\t\t\t");
        for (j = 0; j < 3; j++)
        {
            Sleep(100);
           printf("%d\t", places[i][j]);
        }
    }
    Sleep(1000);
    printf("\n\t\t\t\t\t  MATCH STARTED  ");
    for (i = 0; i < 3 ;i++)
    {
        for (j = 0; j < 3; j++)
        {
           board[i][j]='-';
        }
    }
    Sleep(1000);
    for(loop=0;true;loop)
    {
    if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]&&board[0][0]=='X')
     {printf("PLAYER 1 WON");break;}
     else if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]&&board[0][0]=='O')
     {printf("PLAYER 2 WON");break;}
     
     if(board[0][0]==board[1][0]&&board[1][0]==board[2][0]&&board[0][0]=='X')
     {printf("PLAYER 1 WON");break;}
     else if(board[0][0]==board[1][0]&&board[1][0]==board[2][0]&&board[0][0]=='O')
     {printf("PLAYER 2 WON");break;}
     
     if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]=='X')
     {printf("PLAYER 1 WON");break;}
     else if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]=='O')
      {printf("PLAYER 2 WON");break;}
      
     if(board[0][1]==board[1][1]&&board[1][1]==board[2][1]&&board[1][1]=='X')
     {printf("PLAYER 1 WON");break;}
     else if(board[0][1]==board[1][1]&&board[1][1]==board[2][1]&&board[1][1]=='O')
     {printf("PLAYER 2 WON");break;}
     
     if(board[0][2]==board[1][2]&&board[1][2]==board[2][2]&&board[2][2]=='X')
     {printf("PLAYER 1 WON");break;}
     else if(board[0][2]==board[1][2]&&board[1][2]==board[2][2]&&board[2][2]=='O')
     {printf("PLAYER 2 WON");break;}
     
     if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&board[1][1]=='X')
     {printf("PLAYER 1 WON");break;}
     else if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&board[1][1]=='O')
     {printf("PLAYER 2 WON");break;}
     
     if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]&&board[2][2]=='X')
     {printf("PLAYER 1 WON");break;}
     else if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]&&board[2][2]=='O')
     {printf("PLAYER 2 WON");break;}
     
     if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[0][2]=='X')
     {printf("PLAYER 1 WON");break;}
     else if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[0][2]=='O')
     {printf("PLAYER 2 WON");break;}
     
    for(i = 0; i < 3 ;i++)
    {Sleep(100);
        printf("\n\t\t\t\t\t\t");
        for (j = 0; j < 3; j++)
        {Sleep(100);
           printf("%c\t", board[i][j]);
        }
    }
    ret:
    Sleep(1000);
    printf("\nPLAYER 1[X] ENTER PLACE: ");
    scanf("%d", &p1);
    if(p1 == 0) {
        system("cls");
     system("\"Gaming Portal.exe\"");}
    p1d[1]=board[0][0];
   p1d[2]=board[0][1];
    p1d[3]=board[0][2];
    p1d[4]=board[1][0];
    p1d[5]=board[1][1];
    p1d[6]=board[1][2];
    p1d[7]=board[2][0];
    p1d[8]=board[2][1];
    p1d[9]=board[2][2];
Sleep(1000);
    if(p1==1)
    {for(i;p1d[p1]=='X'|| p1d[p1]=='O';i){
        if(board[0][0]=='-')
        {board[0][0]='X';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[0][0]='X';}
    else if(p1==2)
    {for(i;p1d[p1]=='X'|| p1d[p1]=='O';i){
        if(board[0][1]=='-')
        {board[0][1]='X';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[0][1]='X';}
    else if(p1==3)
    {for(i;p1d[p1]=='X'|| p1d[p1]=='O';i){
        if(board[0][2]=='-')
        {board[0][2]='X';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[0][2]='X';}
    else if(p1==4)
    {for(i;p1d[p1]=='X'|| p1d[p1]=='O';i){
        if(board[1][0]=='-')
        {board[1][0]='X';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[1][0]='X';}
    else if(p1==5)
    {for(i;p1d[p1]=='X'|| p1d[p1]=='O';i){
        if(board[1][1]=='-')
        {board[1][1]='X';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[1][1]='X';}
    else if(p1==6)
    {for(i;p1d[p1]=='X'|| p1d[p1]=='O';i){
        if(board[1][2]=='-')
        {board[1][2]='X';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[1][2]='X';}
    else if(p1==7)
    {for(i;p1d[p1]=='X'|| p1d[p1]=='O';i){
        if(board[2][0]=='-')
        {board[2][0]='X';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[2][0]='X';}
    else if(p1==8)
    {for(i;p1d[p1]=='X'|| p1d[p1]=='O';i){
        if(board[2][1]=='-')
        {board[2][1]='X';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[2][1]='X';}
    else if(p1==9)
   {for(i;p1d[p1]=='X'|| p1d[p1]=='O';i){
        if(board[2][2]=='-')
        {board[2][2]='X';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[2][2]='X';}
    else
    {printf("WRONG PLACE INPUT RETRY");}
    for (i = 0; i < 3 ;i++)
    {
        printf("\n\t\t\t\t\t\t");
        for (j = 0; j < 3; j++)
        {
           printf("%c\t", board[i][j]);
        }
    }
    Sleep(1000);
    if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]&&board[0][0]=='X')
     {printf("\nPLAYER 1 WON");break;}
     else if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]&&board[0][0]=='O')
     {printf("\nPLAYER 2 WON");break;}
     
     if(board[0][0]==board[1][0]&&board[1][0]==board[2][0]&&board[0][0]=='X')
     {printf("\nPLAYER 1 WON");break;}
     else if(board[0][0]==board[1][0]&&board[1][0]==board[2][0]&&board[0][0]=='O')
     {printf("\nPLAYER 2 WON");break;}
     
     if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]=='X')
     {printf("\nPLAYER 1 WON");break;}
     else if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]=='O')
      {printf("\nPLAYER 2 WON");break;}
      
     if(board[0][1]==board[1][1]&&board[1][1]==board[2][1]&&board[1][1]=='X')
     {printf("\nPLAYER 1 WON");break;}
     else if(board[0][1]==board[1][1]&&board[1][1]==board[2][1]&&board[1][1]=='O')
     {printf("\nPLAYER 2 WON");break;}
     
     if(board[0][2]==board[1][2]&&board[1][2]==board[2][2]&&board[2][2]=='X')
     {printf("\nPLAYER 1 WON");break;}
     else if(board[0][2]==board[1][2]&&board[1][2]==board[2][2]&&board[2][2]=='O')
     {printf("\nPLAYER 2 WON");break;}
     
     if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&board[1][1]=='X')
     {printf("\nPLAYER 1 WON");break;}
     else if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&board[1][1]=='O')
     {printf("\nPLAYER 2 WON");break;}
     
     if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]&&board[2][2]=='X')
     {printf("\nPLAYER 1 WON");break;}
     else if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]&&board[2][2]=='O')
     {printf("\nPLAYER 2 WON");break;}
     
     if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[0][2]=='X')
     {printf("\nPLAYER 1 WON");break;}
     else if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[0][2]=='O')
     {printf("\nPLAYER 2 WON");break;}
     Sleep(1000);
    printf("\nPLAYER 2[O] ENTER PLACE: ");
    scanf("%d", &p2);
    if(p2 == 0) {
        system("cls");
     system("\"Gaming Portal.exe\"");}
    Sleep(1000);
    if(p2==1)
    {for(i;p1d[p2]=='X'|| p1d[p2]=='O';i){
        if(board[0][0]=='-')
        {board[0][0]='O';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[0][0]='O';}
    else if(p2==2)
        {for(i;p1d[p2]=='X'|| p1d[p2]=='O';i){
        if(board[0][1]=='-')
        {board[0][1]='O';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[0][1]='O';}
    else if(p2==3)
       {for(i;p1d[p2]=='X'|| p1d[p2]=='O';i){
        if(board[0][2]=='-')
        {board[0][2]='O';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[0][2]='O';}
    else if(p2==4)
       {for(i;p1d[p2]=='X'|| p1d[p2]=='O';i){
        if(board[1][0]=='-')
        {board[1][0]='O';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[1][0]='O';}
    else if(p2==5)
        {for(i;p1d[p2]=='X'|| p1d[p2]=='O';i){
        if(board[1][1]=='-')
        {board[1][1]='O';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[1][1]='O';}
    else if(p2==6)
       {for(i;p1d[p2]=='X'|| p1d[p2]=='O';i){
        if(board[1][2]=='-')
        {board[1][2]='O';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[1][2]='O';}
    else if(p2==7)
        {for(i;p1d[p2]=='X'|| p1d[p2]=='O';i){
        if(board[2][0]=='-')
        {board[2][0]='O';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[2][0]='O';}
    else if(p2==8)
        {for(i;p1d[p2]=='X'|| p1d[p2]=='O';i){
        if(board[2][1]=='-')
        {board[2][1]='O';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[2][1]='O';}
    else if(p2==9)
        {for(i;p1d[p2]=='X'|| p1d[p2]=='O';i){
        if(board[2][2]=='-')
        {board[2][2]='O';break;}
        else
       { printf("PLACE ALREADY OCCUPIED REENTER");
           goto ret;
       }}board[2][2]='O';}
    else
    {printf("WRONG PLACE INPUT RETRY");}
    }
    return 0;
}