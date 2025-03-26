// Prompt the user to enter the number of times they want to roll the die.
// Generate and display a random number between 1 and 6 for each roll.
// Calculate and display the total number of occurrences for each 
// face (1 through 6) after all rolls are completed.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Dice1(int num1);
void Dice2(int num2);
void Dice3(int num3);
void Dice4(int num4);
void Dice5(int num5);
void Dice6(int num6);

int main() 
{
    // Initialize random number generator
    srand(time(NULL));
    int num = 0;
    int n;
    do
    {
        printf("Enter a Number\n");
        scanf("%d" , &num);
        n = rand() % 6 + 1;
        switch (n)
        {
        case 1:
            Dice1(n);
            break;
        case 2:
            Dice2(n);
            break;
        case 3:
            Dice3(n);
            break;
        case 4:
            Dice4(n);
            break;
        case 5:
            Dice5(n);
            break;
        case 6:
            Dice6(n);
            break;
        default:
            break;
        }

    } while (n != num);
    printf("Entered Number and Random Number are match.....\n");
    return 0;
}

void Dice1(int num1)
{
    printf("Random number is: \n");
    printf("........\n");
    printf(".      .\n");
    printf(".  *   .\n");
    printf(".      .\n");
    printf("........\n");

}
void Dice2(int num2)
{
    printf("Random number is: \n");
    printf("........\n");
    printf(".      .\n");
    printf(". * *  .\n");
    printf(".      .\n");
    printf("........\n");
}
void Dice3(int num3)
{
    printf("Random number is: \n");
    printf("........\n");
    printf(".  *   .\n");
    printf(".  *   .\n");
    printf(".  *   .\n");
    printf("........\n");
}
void Dice4(int num4)
{
    printf("Random number is: \n");
    printf("........\n");
    printf(". *  * .\n");
    printf(".      .\n");
    printf(". *  * .\n");
    printf("........\n");
}
void Dice5(int num5)
{
    printf("Random number is: \n");
    printf(".........\n");
    printf(". *   * .\n");
    printf(".   *   .\n");
    printf(". *   * .\n");
    printf(".........\n");
}
void Dice6(int num6)
{
    printf("Random number is: \n");
    printf("........\n");
    printf(". *  * .\n");
    printf(". *  * .\n");
    printf(". *  * .\n");
    printf("........\n");
}
