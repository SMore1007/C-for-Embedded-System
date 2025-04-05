#include <stdio.h>

typedef struct __attribute__((packed)) {
    char a;      // 1 byte
    int b;       // 4 bytes
    char c;      // 1 byte
} PackedStruct;

int main() {
    printf("Size of packed struct: %lu bytes\n", sizeof(PackedStruct));
    return 0;
}
