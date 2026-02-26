// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main() {
    int randomnumber, guess;
    printf("\t\t\t\t\tNumber");
    Sleep(1000);
    printf(" guessing");
    Sleep(1000);
    printf(" Game\n\n");
    Sleep(1000);
    printf("\t\t\t\t\t\t\t--DEVELOPER:- KSHITIJ\n\n");
    Sleep(1000);
    printf("Number is between 1-100\n");
    Sleep(1000);
    printf("Guess a random number. I'll tell you whether the number is greater or less than the number you guessed.\n");
    srand(time(0)); 
    randomnumber = (rand() % 100) + 1;
    
    while(true) {
    Sleep(1000);
        printf("Guess a Number: ");
        scanf("%d", &guess);
        if(guess == 0) {
            Sleep(1000);
            system("cls");
            system("\"Gaming Portal.exe\"");
            break;
        }
        if(randomnumber == guess) {
            Sleep(1000);
            printf("YOU GUESSED CORRECT NUMBER....\n");
            break;
        }
        else if(randomnumber < guess)
        {
            Sleep(1000);
            printf("Number is smaller than your guessed number.\n");
        }
        else if(randomnumber > guess)
        {
            Sleep(1000);
            printf("Number is greater than your guessed number.\n");}
    }
    return 0;
}