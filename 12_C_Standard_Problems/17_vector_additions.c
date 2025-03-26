// A vector in C++ is like a resizable array.

// Both vectors and arrays are data structures used to store 
// multiple elements of the same data type.

// The difference between an array and a vector, 
// is that the size of an array cannot be modified 
// (you cannot add or remove elements from an array). 
// A vector however, can grow or shrink by itself.

// v1 = (2, 5, 4)
// v2 = (3, 2, 1)
// r = v1 + v2 = (5, 7, 5)

// #include<stdio.h>
// #include<stdlib.h>

// #define SIZE 5

// void AddVector(int VecA[], int VectB[], int VectC[], int len);
// void PrintVector(int Vec[], int len);
// int main()
// {
//     int VecA[SIZE] = {4,12,6,3,6};
//     int VecB[SIZE] = {4,12,6,3,6};
//     int VecC[SIZE];
//     AddVector(VecA, VecB, VecC, SIZE);
//     printf("Vector A Is: \n");
//     PrintVector(VecA, SIZE);
//     printf("Vector B is: \n");
//     PrintVector(VecB, SIZE);
//     printf("Addition of the Vector A and B :-\n");
//     PrintVector(VecC, SIZE);
//     return 0;    
// }

// void AddVector(int VecA[], int VectB[], int VectC[], int len)
// {
//     for (int i = 0; i < SIZE; i++)
//     {
//         VectC[i] = VecA[i] + VectB[i];
//     }
    
// }
// void PrintVector(int Vec[], int len)
// {
//     for (int i = 0; i < SIZE; i++)
//     {
//         printf("%d, ",Vec[i]);
//     }
//     printf("\n");
    
// }

#include <stdio.h>

#define SIZE 5  // Define the size of the vectors

void addVectors(const int A[], const int B[], int C[], int size) {
    for (int i = 0; i < size; i++) {
        C[i] = A[i] + B[i];
    }
}

void printVector(const int vector[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int main() {
    int A[SIZE] = {1, 2, 3, 4, 5};   // First vector
    int B[SIZE] = {6, 7, 8, 9, 10};  // Second vector
    int C[SIZE];                     // Vector to store the result

    addVectors(A, B, C, SIZE);

    printf("Vector A: ");
    printVector(A, SIZE);

    printf("Vector B: ");
    printVector(B, SIZE);

    printf("Vector C (A + B): ");
    printVector(C, SIZE);

    return 0;
}
