// Counting the vowels in the string

#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0;
    char str[10] = "Sagar";
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'U' || str[i] == 'u')
        {
            count++;
        }
    }
    printf("Total Number of the vowels in the given sentense are: %d\n", count);
}