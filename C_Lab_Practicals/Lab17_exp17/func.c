#include <stdio.h>
#define PI 3.14159

float calcArea(float r) { return PI * r * r; }
float calcCircumference(float r) { return 2 * PI * r; }

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    printf("Area: %.2f\n", calcArea(radius));
    printf("Circumference: %.2f\n", calcCircumference(radius));
    return 0;
}
