#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[20];
    int rollNumber;
} StudentType_t;

int main()
{
    StudentType_t s1, s2;

    strcpy(s1.name, "Sagar");
    s1.rollNumber = 23;

    strcpy(s2.name, "Anand");
    s2.rollNumber = 24;

    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollNumber);

    printf("Name: %s\n", s2.name);
    printf("Roll Number: %d\n", s2.rollNumber);

    return 0;
}
