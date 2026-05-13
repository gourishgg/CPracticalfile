#include <stdio.h>

void increment(int *p) {
    (*p)++; // Increments the value at the memory address
}

int main() {
    int num = 5;
    printf("Before increment: %d\n", num);
    increment(&num);
    printf("After increment: %d\n", num);
    return 0;
}
