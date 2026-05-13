#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a; a = b; b = temp;
    printf("Inside Call by Value: a=%d, b=%d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}

int main() {
    int x = 10, y = 20;
    
    printf("Original: x=%d, y=%d\n", x, y);
    swapByValue(x, y);
    printf("After Call by Value: x=%d, y=%d\n", x, y); // No change
    
    swapByReference(&x, &y);
    printf("After Call by Reference: x=%d, y=%d\n", x, y); // Swapped
    
    return 0;
}
