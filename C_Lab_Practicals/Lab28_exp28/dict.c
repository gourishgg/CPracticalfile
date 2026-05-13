#include <stdio.h>

struct Distance { int feet; float inch; };

int main() {
    struct Distance d1, d2, result;
    
    printf("Enter D1 (feet inch): "); scanf("%d %f", &d1.feet, &d1.inch);
    printf("Enter D2 (feet inch): "); scanf("%d %f", &d2.feet, &d2.inch);
    
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    
    while (result.inch >= 12.0) {
        result.inch -= 12.0;
        ++result.feet;
    }
    
    printf("Sum: %d feet %.1f inches\n", result.feet, result.inch);
    return 0;
}
