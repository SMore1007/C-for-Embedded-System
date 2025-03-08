#include<stdio.h>

int main()
{
    int count = 0;
    char Name[50] = "Sagar";

    // or include string.h and use, int len = strlen(name);
    while (Name[count] != '\0')
    {
        count++;
    }
    printf("Strlen: %d",count);

    return 0;
}