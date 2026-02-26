#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int choice, random;
    char repeat;
    srand(time(NULL));

    char funny[10][100] = {
        "I'm not a photographer, but I can definitely picture us together.",
        "Are you a parking ticket? Because you've got 'FINE' written all over you.",
        "Do you have a map? I just got lost in your eyes.",
        "My doctor says I'm lacking Vitamin U.",
        "If you were a triangle, you'd be acute one.",
        "I'd take you to the movies, but they don't let you bring your own snacks.",
        "I'm doing a survey... What's your phone number?",
        "Are you a magician? Whenever I look at you, everyone else disappears.",
        "Is your name Google? Because you have everything I'm searching for.",
        "I'm not usually this clumsy, but you just made me trip over my own heart."};
    
    char romantic[10][100] = {
        "I thought 'perfection' was just a concept until I saw you.",
        "I haven't stopped thinking about you since we met.",
        "You make me feel like I'm in a movie, and you're the best part.",
        "Meeting you makes me reconsider my belief in luck.",
        "Home is a person, and I think I just found mine.",
        "Your smile is my favorite thing to wake up to.",
        "I didn't believe in soulmates until I talked to you.",
        "If I had a star for every smile you gave me, I'd have a galaxy.",
        "I'm pretty sure you're the reason people write love songs.",
        "You don't just have my attention; you have my heart."};

    char cheesy[10][100] = {
        "Do you believe in love at first sight, or should I walk by again?",
        "Is it hot in here, or is it just you?",
        "Your hand looks heavy—can I hold it for you?",
        "Are you French? Because Eiffel for you.",
        "Did it hurt when you fell from heaven?",
        "Do you have a Band-Aid? I scraped my knee falling for you.",
        "If you were a fruit, you'd be a fine-apple.",
        "Can I follow you home? My parents told me to follow my dreams.",
        "Is there an airport nearby, or is that just my heart taking off?",
        "If beauty were time, you'd be an eternity."};

    char pickup[10][100] = {
        "I'm writing a phone book, can I have your number?",
        "Aside from being beautiful, what do you do for a living?",
        "I seem to have lost my number. Can I have yours?",
        "Are you a campfire? Because you're hot and I want s'more.",
        "Do you have a name, or can I call you mine?",
        "If I could rearrange the alphabet, I'd put 'U' and 'I' together.",
        "Do you have a personality to go with those eyes?",
        "I forgot my smooth line the moment I looked at you.",
        "You look like you know how to have a good time. Am I invited?",
        "I hope you know CPR, because you are taking my breath away."};

    char compliments[10][100] = {
        "That color looks incredible on you.",
        "I love the way your mind works.",
        "You have a very 'dangerous' smile—it makes me forget my words.",
        "How is it possible that you look even better today?",
        "I've never met anyone who makes me laugh quite like you do.",
        "You have such a calming energy, yet you make my heart race.",
        "Your style is impeccable.",
        "You're like a high-end coffee: sophisticated and addictive.",
        "I don't know what's more sparkling—your eyes or your wit.",
        "You make 'effortless' look like an art form."};

    char questions[10][100] = {
        "What's the best way for a guy like me to ask you out?",
        "What's your favorite thing to do on a rainy Sunday?",
        "Are you always this charming, or is it just for me?",
        "What's one thing I should know about you before I fall for you?",
        "If we were on a date right now, where would we be?",
        "Do you prefer the slow burn or the spark at first sight?",
        "What's your guilty pleasure that I can tease you about?",
        "If you could be anywhere right now, why is it here with me?",
        "What's the most romantic thing someone has ever done for you?",
        "Are you trying to make me nervous, or is it just working naturally?"};

    char jokes[10][100] = {
        "Is your shirt made of boyfriend material?",
        "I'm like a Rubik's cube: I get mixed up when you turn me around.",
        "Are you a 90-degree angle? Because you're looking right.",
        "I'm not a genie, but I can make your pizza dreams come true.",
        "Do you like raisins? How about a date?",
        "I'm a thief... I'm here to steal your attention.",
        "Is your name Wi-Fi? Because I'm feeling a connection.",
        "My friend wants to know if you think I'm cute (It's me).",
        "You're like a dictionary; you add meaning to my life.",
        "Are you a bank loan? Because you have my interest."};

    char puns[10][100] = {
        "I'm 'soy' into you.",
        "I think we'd be a 'match' made in heaven.",
        "I'm 'hooked' on you.",
        "You're 'tea-riffic'!",
        "I'm 'feline' a real connection here.",
        "You've got me in a 'spin'.",
        "We make a 'pear-fect' couple.",
        "You're 'o-fish-ally' the cutest person here.",
        "Don't be 'shellfish,' give me a chance!",
        "You're 'berry' beautiful today."};

    char quotes[10][150] = {
        "'I've fallen in love many times... always with you.'",
        "'You are my favorite distraction.'",
        "'If I had a flower for every thought of you, I'd have a garden.'",
        "'Whatever our souls are made of, yours and mine are the same.'",
        "'I am never not thinking of you.'",
        "'I wish I could find you sooner and love you longer.'",
        "'You're the once in a lifetime that happens every day.'",
        "'To be your lover was all I ever dreamed.'",
        "'You are the finest person I have ever known.'",
        "'You have bewitched me, body and soul.'"};

    char oneliners[10][100] = {
        "Stop being so cute, I can't concentrate.",
        "You're the highlight of my day.",
        "Dinner is on me, but the company is on you.",
        "I didn't know what I wanted until I saw you.",
        "You're dangerous; I need to keep an eye on you.",
        "You're suffering from a lack of Vitamin Me.",
        "Can you stop being so far away now?",
        "You look exactly like my next mistake.",
        "I'm not a gambler, but I'd bet on us.",
        "Just wanted to say: you look incredible today."};

    printf("\t\t\t\tWELCOME ");
    Sleep(500);
    printf("TO ");
    Sleep(500);
    printf("THE ");
    Sleep(500);
    printf("FLIRTING ");
    Sleep(500);
    printf("LINES ");
    Sleep(500);
    printf("GENERATOR\n");
    Sleep(1000); 
    printf("\t\t\t\t\t\t\t--DEVELOPED BY :- KSHITIJ PAWAR\n");
    Sleep(1000);

    do
    {
        printf("\nSelect the type of flirting line you want to generate:\n");
        printf("1. Funny\t2. Romantic\t3. Cheesy\n4. Pick Up\t5. Compliments\t6. Questions\n7. Jokes\t8. Puns\t\t9. Quotes\n10. One Liners\n");
        printf("\nEnter Number: ");
        scanf("%d", &choice);

        random = rand() % 10; 

        printf("\n>>> ");
        switch (choice)
        {
        case 1: printf("%s", funny[random]); break;
        case 2: printf("%s", romantic[random]); break;
        case 3: printf("%s", cheesy[random]); break;
        case 4: printf("%s", pickup[random]); break;
        case 5: printf("%s", compliments[random]); break;
        case 6: printf("%s", questions[random]); break;
        case 7: printf("%s", jokes[random]); break;
        case 8: printf("%s", puns[random]); break;
        case 9: printf("%s", quotes[random]); break;
        case 10: printf("%s", oneliners[random]); break;
        default: printf("Wrong Input!");
        }
        printf(" <<<\n");

        printf("\nGenerate another? (y/n): ");
        repeat = getch(); 

    } while (repeat == 'y' || repeat == 'Y');

    printf("\n\nGo and send this to your crush! Good Luck! 🫡\n");
    Sleep(1500);
    return 0;
}