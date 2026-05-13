#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp1 = fopen("input.txt", "w");
    fputs("apple orange apple banana", fp1);
    fclose(fp1);

    fp1 = fopen("input.txt", "r");
    FILE *fp2 = fopen("temp.txt", "w");
    
    char word[50];
    char target[] = "apple";
    char replace[] = "grape";
    int count = 0;

    while (fscanf(fp1, "%s", word) != EOF) {
        if (strcmp(word, target) == 0) {
            fprintf(fp2, "%s ", replace);
            count++;
        } else {
            fprintf(fp2, "%s ", word);
        }
    }

    fclose(fp1);
    fclose(fp2);
    
    remove("input.txt");
    rename("temp.txt", "input.txt");

    printf("Replaced '%s' with '%s' %d times.\n", target, replace, count);
    return 0;
}
