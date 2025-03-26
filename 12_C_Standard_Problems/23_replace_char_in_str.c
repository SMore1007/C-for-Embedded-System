#include<stdio.h>
#include<string.h>
void RepaceCharInStr(char *str, int len, char chr, char addchr);

int main()
{
    char str[] = "sagar";
    int len = strlen(str);
    char chr;
    char addchr;
    printf("which char you are going to replace in string:");
    scanf(" %c", &chr);
    printf("at which char you are going to replace :");
    scanf(" %c", &addchr);
    printf("\n");
    printf("Befor replacing the char in a string is: %s\n", str);
    RepaceCharInStr(str, len, chr, addchr);
    printf("After replacing the char in a string is: %s\n", str);
}

void RepaceCharInStr(char *str, int len, char chr, char addchr){
    for (int i = 0; i < len; i++){
        if (str[i] == chr){
            str[i] = addchr;
        } else {
            // do nothing 
        }
    }
}