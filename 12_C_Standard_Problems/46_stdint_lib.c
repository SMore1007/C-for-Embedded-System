#include<stdio.h>
#include<stdint.h>
int main()
{
    int8_t value[10];
    int8_t new[10];
    gets(value);
    printf("\n");
    scanf("%s", &new);
    printf("\n\nData is: \n");
    printf("%s\n", value);
    printf("%s", new);
    return 0;
}