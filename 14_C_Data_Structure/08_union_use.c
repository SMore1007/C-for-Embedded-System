#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);

    d.f = 3.14;
    printf("d.f = %.2f\n", d.f);

    d.c = 'A';
    printf("d.c = %c\n", d.c);

    // Accessing old values may give garbage because memory is shared
    printf("After setting c:\n");
    printf("d.i = %d\n", d.i); // Garbage
    printf("d.f = %.2f\n", d.f); // Garbage

    return 0;
}
