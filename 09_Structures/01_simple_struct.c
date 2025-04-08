#include<stdio.h>
#include<stdint.h>
#include<string.h>


typedef struct  
{
    int rollNo;
    char SubTopicDefinition[20];
}StudentType_t;


typedef struct
{
    char name[20];
    int age;

}GirlType_t;

typedef struct 
{
    int8_t b0;
    int8_t b1;
    int8_t b2;
    int8_t b3;
    int8_t b4;
    int8_t b5;
    int8_t b6;
    int8_t b7;
    
}PORTC;


GirlType_t FinalYearGirls[10];


int main()
{
    printf("Enter number of g\n");
    int number;
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        char name[10];
        int Age = 0;
        printf("Enter girl info....... %d\n", i+1 );
        printf("Enter name\n");
        scanf("%s", &name);
        strcpy(FinalYearGirls[i].name, name);

        printf("Enter Age\n");
        scanf("%d", &Age);
        FinalYearGirls[i].age = Age;
    }

    printf("Girls data as follows\n");
    for (int i = 0; i < number; i++)
    {
        printf("\n_---------------------------_\n");
        printf("Name:  %s\n",FinalYearGirls[i].name);
        printf("Age: %d\n",FinalYearGirls[i].age);
    }
    

    // StudentType_t S1 = {45, "Emedded System"};
    // printf("Roll Number: %d\n", S1.rollNo);
    // printf("Subject: %s\n", S1.SubTopicDefinition);
    return 0;   
}