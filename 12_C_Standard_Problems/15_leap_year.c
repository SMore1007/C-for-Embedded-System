#include<stdio.h>

int IsLeap(int year);
int main()
{
    int year;
    printf("Enter a year\n");
    scanf("%d", &year);
    int result = IsLeap(year);
    if(result == 1)
    {
        printf("Given %d year is Leap Year\n", year);
    }
    else
    {
        printf("Given %d year is Not Leap Year\n", year);
    }
}

int IsLeap(int year)
{
    if(year % 4 == 0 && year % 100 != 0) {return 1;
    }else if (year % 400 == 0){ return 1;
    }else{ return 0;
    }
}