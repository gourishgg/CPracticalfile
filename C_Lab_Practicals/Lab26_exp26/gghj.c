#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];
    int count = 0;

    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter substring: ");
    gets(sub);

    char *tmp = str;
    while((tmp = strstr(tmp, sub)) != NULL) {
        count++;
        tmp += strlen(sub);
    }

    printf("Occurrences: %d\n", count);
    return 0;
}
