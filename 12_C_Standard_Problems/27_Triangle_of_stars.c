// First triangle 
/*

#include<stdio.h>
int main()
{
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
*/

// Second Triangle 

/*
#include<stdio.h>
char str[] = " ";
int main()
{
    for (int row = 0; row < 5; row++)  // 0 1 2 3 4 
    {
        for (int col = 0; col < 5; col++)  // 
        {
            if(row + col >= 4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

// Third Pattern

/*
#include<stdio.h>
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (row + col < 5)
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
*/

#include<stdio.h>
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (col >= row)
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf(" \n");
    }
}