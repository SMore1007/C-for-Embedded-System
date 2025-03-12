#include<stdio.h>
#include<string.h>

typedef struct 
{
    char name[20];
    int rollNum;
}StudentType_t;

int main()
{
    int total = 0;
    printf("Enter Number of Students: ");
    scanf("%d", &total);
    
    StudentType_t s[total];

    printf("Enter Student Information: \n");
    for (int i = 0; i < total; i++)
    {
        char Name[20];

        printf("Enter Name of Student %d\n", i+1);
        scanf(" %s",&Name);
        strcpy(s[i].name, Name);
        printf("Enter Roll Number of %s \n", Name);
        scanf("%d", &s[i].rollNum);
    }

    char student[10];
    printf(" Which Student Information Do you want ?");
    scanf(" %s", &student);

    for (int i = 0; i < total; i++)
    {
        if (strcmp(s[i].name, student) == 0)
        {
            printf("Student %d, Name: %s, Roll Number %d\n",i+1, s[i].name, s[i].rollNum);
        }       
    }
    return 0;
}