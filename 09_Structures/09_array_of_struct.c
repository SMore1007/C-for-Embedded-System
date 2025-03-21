#include<stdio.h>
#include<string.h>

typedef struct 
{
    char name[10];
    int RollNo;
}StudentDataType_t;

int main()
{
    int totalStudent = 0;
    printf("Enter Total Students for the year 2024-25:\n");
    scanf("%d", &totalStudent);

    StudentDataType_t classStrength[totalStudent], temp;  
    
    printf("Enter Student Roll number and Name\n");
    for (int i = 0; i < totalStudent; i++)
    {
        char Name[10];
        printf("Enter Name of Student %d: ", i + 1);
        scanf(" %d", &Name);
        strcpy(classStrength[i].name, Name);
        printf("\nEnter the Roll Number of %s:",classStrength[i].name);
        scanf("%d", &classStrength[i].RollNo);
    }
    
    // Arrange the student data in accending order according to their roll number
    for (int i = 0; i < totalStudent; i++)
    {
        for (int j = i + 1; j < totalStudent; j++)
        {
            if (classStrength[i].RollNo > classStrength[j].RollNo)
            {
                // swapping of struct
                temp = classStrength[i];
                classStrength[i] = classStrength[j];
                classStrength[j] = temp;
            }
        }
    }
    
    // print the student data in accending order

    printf("Name\tRoll Number\n");
    for (int i = 0; i < totalStudent; i++)
    {
        printf("%s\t%d\n", classStrength[i].name, classStrength[i].RollNo);
    }
    return 0;
}