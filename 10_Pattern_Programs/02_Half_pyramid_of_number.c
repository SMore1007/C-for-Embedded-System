#include<stdio.h>
int main()
{
    int row, col, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (row = 0; row < rows; ++row)
    {
        for (col = 1; col <= row; ++col)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}