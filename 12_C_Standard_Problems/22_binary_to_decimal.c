#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int Convert(char *str, int len);

int main()
{
    char str[] = "10101";
    int len = strlen(str);
    int result = Convert(str, len);
    printf("Decimal number is: %d\n",result);
}

int Convert(char *str, int len)
{
    int num = atoi(str);
    printf("%d\n", num);
    int decimal = 0;
    for (int i = 0; i < len; i++)
    {
        int n = num % 10;  // 1
        decimal = decimal + n * (pow(2, i));
        num /= 10;
    }
    return decimal;
}