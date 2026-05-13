#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello", s2[50] = "World";
    int choice;
    printf("1.strlen 2.strcpy 3.strcat 4.strcmp\nChoice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Length of s1: %zu\n", strlen(s1)); break;
        case 2: strcpy(s1, s2); printf("Copied string: %s\n", s1); break;
        case 3: strcat(s1, s2); printf("Concatenated: %s\n", s1); break;
        case 4: printf("Comparison: %d\n", strcmp(s1, s2)); break;
    }
    return 0;
}
