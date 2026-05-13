#include <stdio.h>

struct Date { int d, m, y; };
struct Employee {
    int id;
    char name[20];
    int projects[3]; // Array within structure
    struct Date dob; // Nested structure
};

int main() {
    struct Employee emp[2]; // Array of structures

    for(int i=0; i<2; i++) {
        printf("Enter ID for Emp %d: ", i+1);
        scanf("%d", &emp[i].id);
        emp[i].projects[0] = 101; // Sample project assignment
    }

    printf("\nDisplaying Records:\n");
    for(int i=0; i<2; i++) {
        printf("Emp %d ID: %d, Proj 1: %d\n", i+1, emp[i].id, emp[i].projects[0]);
    }
    return 0;
}
