// Check if the given string is palindrome or not
// ex. level is palindrome
// ex. radar is palindrome

#include<stdio.h>
#include<string.h>
int main()
{
    int flag = 0;
    char str[] = "level";
    int len = strlen(str); 
    printf("length of the str %d\n", len);
    for(int i = 0; i < len; i++)  // 012345
    {
        if(str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Given string is palindrome \n");
    }
    else
    {
        printf("Given string is not palindrome \n");
    }
}