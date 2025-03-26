// Vector Dot Product in C 

#include<stdio.h>

void DotProduct(int Vect1[], int Vect2[],int Vect3[], int len);
void PrintVect(int Vec[], int SIZE);
#define SIZE 5

int main()
{
    int Vect1[SIZE] = {1,2,3,4,5};
    int Vect2[SIZE] = {1,2,3,4,5};
    int Vect3[SIZE];

    DotProduct(Vect1, Vect2, Vect3, SIZE);
    printf("Vector 1 is: \n");
    PrintVect(Vect1, SIZE);
    printf("Vector 2 iS: \n");
    PrintVect(Vect2, SIZE);
    printf("Dot product of the Vector 1 and Vector 2 iS: \n");
    PrintVect(Vect3, SIZE);
}

void DotProduct(int Vect1[], int Vect2[],int Vect3[],int len)
{
    for (int i = 0; i < len; i++)
    {
        Vect3[i] =  Vect1[i] * Vect2[i];
    }
    
}
void PrintVect(int Vec[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", Vec[i]);
    }
    printf("\n");
}