
//  String uppend

#include<stdio.h>
#include<string.h>

char appendStr(char *str1, char chr);


int main()
{
    char str1[20] = "Sagar";
    char chr = 'A';
    appendStr(str1, chr);
    printf("Appended String is: %s\n", str1);
    return 0;
}

char appendStr(char *str1, char chr)
{
    int str1len = strlen(str1);
    printf("Str1 len is: %d\n",str1len);

    str1[str1len]= chr;
    str1[str1len+ 1] = '\0';
}
