#include <stdio.h>

int main() {
    char ch;
    int num, flag;

    // Part 1: Vowel or Consonant
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a Vowel.\n", ch);
            break;
        default:
            // Assuming the user enters a valid alphabet
            printf("%c is a Consonant.\n", ch);
    }

    // Part 2: Positive, Negative, or Zero
    printf("\nEnter a number: ");
    scanf("%d", &num);

    // Flag logic for switch case: 1 for positive, -1 for negative, 0 for zero
    if (num > 0) flag = 1;
    else if (num < 0) flag = -1;
    else flag = 0;

    switch(flag) {
        case 1:
            printf("The number is Positive.\n");
            break;
        case -1:
            printf("The number is Negative.\n");
            break;
        case 0:
            printf("The number is Zero.\n");
            break;
    }

    return 0;
}
