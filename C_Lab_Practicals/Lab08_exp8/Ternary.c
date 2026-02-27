#include <stdio.h>

int main() {
    int a, b, c, max_ternary, max_ifelse;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using Conditional (Ternary) Operator
    max_ternary = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("\nGreatest using conditional operator: %d\n", max_ternary);

    // Using If-Else Statement
    if (a >= b && a >= c) {
        max_ifelse = a;
    } else if (b >= a && b >= c) {
        max_ifelse = b;
    } else {
        max_ifelse = c;
    }
    printf("Greatest using if-else statement: %d\n", max_ifelse);

    return 0;
}
