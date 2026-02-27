#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Using while loop
    while (i <= n) {
        sum += i;
        i++;
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
