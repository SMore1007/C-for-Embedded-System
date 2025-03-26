#include<stdio.h>
int FindLen(char *str);
int main()
{
    char *str = "Sagar More";
    int Result = FindLen(str);
    printf("Length of the string is: %d\n", Result );
}

int FindLen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i + 1;
    }
    return i;
}