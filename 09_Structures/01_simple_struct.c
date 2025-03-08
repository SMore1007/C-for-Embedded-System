#include<stdio.h>

typedef struct  
{
    int rollNo;
    char SubTopicDefinition[20];
}StudentType_t;

int main()
{
    StudentType_t S1 = {45, "Emedded System"};
    printf("Roll Number: %d\n", S1.rollNo);
    printf("Subject: %s\n", S1.SubTopicDefinition);
    return 0;   
}