#include <stdio.h>

int main() {
    int n;
    long long int m = 1; // Use long long int for larger factorials

    printf("Enter a non-negative integer for factorial calculation: \n");
    scanf("%d", &n);

    // Check if the input is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit the program with an error code
    }

    while (n > 0) {
        m = n * m;
        n--;
    }

    printf("Factorial: %lld\n", m);
    return 0;
}
