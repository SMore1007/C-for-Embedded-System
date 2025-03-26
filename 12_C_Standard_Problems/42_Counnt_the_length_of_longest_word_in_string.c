#include<stdio.h>
#include<string.h>

void longestWord(char *str, int len);

int main()
{
    char string[] = "Sagar Santosh More is a very good Boy";

    int length = strlen(string);
    longestWord(string, length);
}

void longestWord(char *str, int len)
{
    int count = 0, maxLength = 0;
    char word[50] = "", longestWord[50] = "";
    for (int i = 0; i <= len; i++) // Loop through each character
    {
        if (str[i] != ' ' && str[i] != '\0') // Keep adding to current word until space or end
        {
            word[count++] = str[i];
        }
        else // End of a word
        {
            word[count] = '\0'; // Null-terminate the current word
            if (count > maxLength) // Check if it's the longest word so far
            {
                maxLength = count;
                strcpy(longestWord, word); // Copy the current word to longestWord
            }
            count = 0; // Reset for the next word
        }
    }
    printf("The longest word is: %s with length: %d\n", longestWord, maxLength);
}