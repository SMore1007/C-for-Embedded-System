#include<stdio.h>

int main()
{
    int day;
    printf("Enter a Day number bet. 1 to 7\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Manday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;

    case 3:
        printf("Wensday\n");
        break;
    case 4:
        printf("Thusday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Enterd wrong option\nchose bet 1 to 7\n");
        break;
    }
}