#include<stdio.h>
#include<string.h>

void CountCharsInStr(char *str, int len);

int main()
{
    char string[] = "Sagar Santosh More";
    int len = strlen(string);
    CountCharsInStr(string, len);
}

void CountCharsInStr(char *str, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            count++;
        }
        
    }
    printf("Total Number of chars in a string is: %d\n", count);
}