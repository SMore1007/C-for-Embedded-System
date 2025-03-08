#include<stdio.h>

int main()
{
    int count = 0;
    int word = 0;
    char Name[50] = "Sagar Santosh More";

    while (Name[count] != '\0')
    {
        if (Name[count] == ' ')
        {
           
            word++;
        }
        count++;
    }
    printf("Length Count: %d\nWord Count: %d",count, word+1);

    return 0;
}