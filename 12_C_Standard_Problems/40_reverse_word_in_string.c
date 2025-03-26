#include<stdio.h>
#include<string.h>

void Reverse(char *str, int len);

int main()
{
    char str[] = "Sagar More";
    char *ptr = str;
    int lenght = strlen(str);
    Reverse(ptr, lenght);
}

void Reverse(char *str, int len)
{
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    
}