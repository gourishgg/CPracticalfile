#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    int temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
        count++;
    }
    
    printf("Number of digits: %d\n", count);
    printf("Reversed number: %d\n", reversed);
    return 0;
}
