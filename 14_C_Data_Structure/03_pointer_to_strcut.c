#include<stdio.h>

typedef struct 
{
    char *name;
    int age;
}StudentInfoType_t;

int main()
{
    StudentInfoType_t s1;
    StudentInfoType_t *ptr;
    ptr = &s1;

    ptr->name = "Sagar";
    ptr->age = 23;

    printf("Pointer to strcuture\n");
    printf("ptr->name: %s\n", ptr->name);
    printf("ptr->age: %d\n", ptr->age);
    return 0;
}
