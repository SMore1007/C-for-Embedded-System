#include<stdio.h>

int main()
{
    int len = 0;
    char str[20] = "Sagar Santosh MorR";
    printf("\n%s", str);
    char ch1, ch2;
    printf("\nWhich char do you want to replace: ");
    scanf("%c", &ch1);
    printf("\nEnter char: ");
    scanf(" %c", &ch2);

    while (str[len] != '\0')
    {   
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch1)
        {
            str[i] = ch2;
        }
        
    }
    
    printf("%s", str);
    
}