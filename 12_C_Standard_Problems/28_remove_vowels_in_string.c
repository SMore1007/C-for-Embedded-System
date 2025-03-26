#include <stdio.h>
#include <string.h>

void RemoveVowel(const char *Str, char *NewStr);

int main()
{
    char str[] = "Sagar";
    char NewStr[100];     // Allocate enough space for the new string
    unsigned char j = 0;

    RemoveVowel(str, NewStr);
    NewStr[j] = '\0';  // Null-terminate the new string

    printf("Previous String: %s\n", str);
    printf("Vowels removed String: %s\n", NewStr);
    return 0;
}

void RemoveVowel(const char *Str, char *NewStr)
{
    unsigned char j = 0; // Declare j as local to this function

    for (int i = 0; i < strlen(Str); i++) 
    {
        // Check for vowels both lowercase and uppercase
        if (Str[i] != 'a' && Str[i] != 'e' && Str[i] != 'i' && Str[i] != 'o' && Str[i] != 'u' &&
            Str[i] != 'A' && Str[i] != 'E' && Str[i] != 'I' && Str[i] != 'O' && Str[i] != 'U') 
        {
            NewStr[j] = Str[i]; // Add character to new string
            j++;                // Increment index for new string
        }
    }
    NewStr[j] = '\0';           // Null-terminate the new string
}