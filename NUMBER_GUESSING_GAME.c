                        /* PROJECT TITLE: NUMBER GUESSING GAME.....*/

/*
PROJECT PROBLEM:
    We will create a program that generates a random number and asks the player to 
guess it. If the player's guess is higher thab the actual number , the program 
displays "LOWER NUMBER PLEASE!!!".Similarly if the player's guess is too low , the
program displays "HIGHER NUMBER PLEASE!!!".
    When the player guesses the correct number, the program displays the number of 
guesses the player used to arrive at the number.

DATE: 01 NOVEMER 2021.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 and 10
    // printf("The number is %d\n", number);
    // Keep running the loop until the number is guessed

    printf("***Guess the number between 1 to 100***\n");

    do{
        scanf("%d", &guess);
        if(guess>number){
            printf("LOWER NUMBER PLEASE!!!\n");
        }
        else if(guess<number){
            printf("HIGHER NUMBER PLEASE!!!\n");
        }
        else{
            printf("YOU GUESSED IT IN %d ATTEMPTS....\n", nguesses);
        }
        nguesses++;
    }while(guess!=number);
    
    return 0;
}

