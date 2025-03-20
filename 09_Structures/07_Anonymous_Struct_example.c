#include <stdio.h>

// Defining an unnamed structure with two members: feet (integer) and inch (float).
// Declaring two structure variables: d1 (uninitialized) and d2 (initialized).
struct {
    int feet;
    float inch;
} d1, d2 = {12, 4.4};  // d2 is initialized with feet = 12 and inch = 4.4

int main()
{
    // Assigning values to the members of d1
    d1.feet = 10;   // d1.feet is set to 10
    d1.inch = 6.5;  // d1.inch is set to 6.5

    // Printing the values of d1
    printf("d1: %d\t%.2f\n", d1.feet, d1.inch);

    // Printing the values of d2 (feet remains 12, inch is still 4.4)
    printf("d2: %d\t%.2f", d2.feet, d2.inch);

    return 0; // Return 0 indicates successful execution of the program
}
