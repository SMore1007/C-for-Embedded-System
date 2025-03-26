#include<stdio.h>
#include<string.h>
void trim(char *s, int len);
char S[] = "  \n \t \n  Sagar";
int main()
{
    
    int length = strlen(S);
    printf("Length of the string is: %d\n", length);
    trim(S, length);
}

void trim(char *s, int len){
    int count = 0;
    while (s[count] == ' ' || s[count] == '\n' || s[count] == '\t'){
        count++;
    }
    printf("Count is %d\n", count);

    for (int i = 0; i < len - count; i++)
    {
        S[i] = s[i+count];
        printf("%c",S[i]);
    }
}