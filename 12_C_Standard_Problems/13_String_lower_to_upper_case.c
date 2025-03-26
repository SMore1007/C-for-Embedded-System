#include<stdio.h>
#include<string.h>
#include<ctype.h>

void toUpper(char *str);
void toLower(char *str);
int main()
{
    char str[20] = "Sagar More";
    toUpper(str);
    printf("Upper Case string is: %s\n", str);
    toLower(str);
    printf("Lower Case string is: %s\n", str);
}

void toUpper(char *str)
{
    while (*str)
    {
        *str = toupper((unsigned char) *str);
        str++;
    }
    
}
void toLower(char *str)
{
    while (*str)
    {
        *str = tolower((unsigned char) *str);
        str++;
    }
}