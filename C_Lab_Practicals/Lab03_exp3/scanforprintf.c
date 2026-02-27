/* The <stdio.h> library is required for Standard Input and Output functions.
   It contains the declarations for printf() and scanf().
*/
#include <stdio.h>

int main() {
    int age;
    
    // Using printf to display block structure and student details
    printf("--- Student Details ---\n");
    printf("Name: Gourish Kapoor\n");
    printf("Roll Number: 2510990001\n");
    printf("University: Chitkara University\n");
    printf("Class: BE CSE Group 1\n");
    printf("-----------------------\n\n");

    // Using printf to prompt the user
    printf("Enter your age: ");
    
    // Using scanf to take user input
    scanf("%d", &age);
    
    // Outputting the received data
    printf("You have successfully entered your age as: %d\n", age);

    return 0;
}
