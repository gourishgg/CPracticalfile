#include <stdio.h>

int main() {
    int x, y, temp;

    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);

    printf("\nOriginal values: x = %d, y = %d\n", x, y);

    // a) By using temporary variable
    temp = x;
    x = y;
    y = temp;
    printf("After swapping (using temp): x = %d, y = %d\n", x, y);

    // b) Without using temporary variable
    // Swapping them back to original first, then applying logic
    x = x + y; 
    y = x - y; 
    x = x - y; 
    
    // Swapping them a second time without temp
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping again (without temp): x = %d, y = %d\n", x, y);

    return 0;
}
