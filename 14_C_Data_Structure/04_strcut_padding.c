
/*
Structure padding is the process by which the compiler adds extra memory bytes between 
structure members to align data in memory according to the system's architecture.

*/

#include <stdio.h>

typedef struct 
{
    char a;      // 1 byte
    int b;       // 4 bytes
    char c;      // 1 byte
} PaddedStruct;

int main() {
    printf("Size of struct: %lu\n", sizeof(PaddedStruct));
    return 0;
}
