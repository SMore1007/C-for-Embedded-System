/*
Project Name: Number Guessing Game
Author Name:  Sagar More
Description: A simple number guessing game where the user tries to guess 
             a randomly generated number between 1 and 100.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator to ensure different random numbers on each run
    srand(time(NULL));

    // Variable declarations
    int randomNumber, guess, Attempts = 0;

    // Display welcome message
    printf("Welcome to the world of number guessing game!\n");

    // Generate a random number between 1 and 100
    randomNumber = rand() % 100 + 1; 

    // Start the guessing loop
    do {
        Attempts++;  // Increment attempt count

        // Prompt user for input
        printf("Please Enter Your Guess Number Between 1 to 100: ");
        scanf("%d", &guess);

        // Provide hints to the user
        if (randomNumber > guess) {
            printf("Guess a Larger Number\n");
        } else if (randomNumber < guess) {
            printf("Guess a Smaller Number\n");
        } else {
            // Correct guess message
            printf("Congratulations!! You Have Successfully Guessed the Number in %d Attempts\n", Attempts);
        }
    } while (guess != randomNumber);  // Loop until the correct number is guessed

    return 0;  // End of program
}
