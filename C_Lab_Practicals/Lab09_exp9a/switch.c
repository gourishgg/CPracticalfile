#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    
    switch(tolower(ch)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("%c is a Vowel.\n", ch);
            break;
        default:
            if(isalpha(ch))
                printf("%c is a Consonant.\n", ch);
            else
                printf("Invalid input.\n");
    }
    return 0;
}
