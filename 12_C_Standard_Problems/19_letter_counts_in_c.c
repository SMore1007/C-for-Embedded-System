
// Simple method 

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     unsigned char count = 0;
//     char a;
//     char str[] = "Sagar More";
//     int len = strlen(str);
//     printf("Enter a Letter for Counting in string: \n");
//     scanf("%c", &a);
//     for (int i = 0; i < len; i++)
//     {
//         if( str[i] == a)
//         {
//             count += 1;
//         }
//     }
//     printf("Total Number of '%c' in the string is: %d\n", a, count);
// }


// Doing by function

#include<stdio.h>
#include<string.h>

int LetterCount(char Str[], char letter, int len);

int main()
{
    int TotalCount;
    char Letter;
    char Str[] = "Sagar More";
    int length = strlen(Str);
    printf("Enter a Char For Counting it in the String\n");
    scanf("%c", &Letter);
    TotalCount = LetterCount(Str, Letter, length);
    printf("Total Count of '%c' in the String is: %d\n", Letter, TotalCount );
}

int LetterCount(char Str[], char Letter, int len)
{
    int Count = 0;
    for (int i = 0; i < len; i++)
    {
        if(Str[i] == Letter)
        {
            Count += 1;
        }
    }
    return Count;
}