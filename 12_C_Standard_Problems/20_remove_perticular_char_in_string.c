#include <stdio.h>

void removeChar(char *str, char charToRemove) {
    int i, j = 0;
    // Iterate over each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // If the current character is not the one to remove
        if (str[i] != charToRemove) {
            // Copy the character to the new position
            str[j++] = str[i];
        }
    }
    // Null-terminate the modified string
    str[j] = '\0';
}

int main() 
{
    char str[] = "Hello, World!";
    char charToRemove = 'o';

    printf("Original string: %s\n", str);
    
    removeChar(str, charToRemove);

    printf("Modified string: %s\n", str);

    return 0;
}