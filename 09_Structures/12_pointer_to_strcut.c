#include<stdio.h>
#include<string.h>

typedef struct 
{
    char name[10];
    int age;
}InfoType_t;

void printData(InfoType_t *student);


int main()
{
    InfoType_t studet1;
    InfoType_t *class1studet;
    class1studet = &studet1;
    printData(class1studet);

    return 0;
}

void printData(InfoType_t *student)
{
    strcpy(student->name, "Sagar");
    student->age = 24;

    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
}