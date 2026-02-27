#include <stdio.h>
#include <math.h>

int main() {
    float u, a, t, b, c, p;
    float V, S, T, H;

    // Assuming sample inputs for evaluation
    printf("Enter values for u, a, t: ");
    scanf("%f %f %f", &u, &a, &t);
    
    printf("Enter values for b, c, p: ");
    scanf("%f %f %f", &b, &c, &p);

    // (i) V = u + at
    V = u + (a * t);
    
    // (ii) S = ut + 1/2at^2
    S = (u * t) + (0.5 * a * pow(t, 2));
    
    // (iii) T = 2*a + sqrt(b) + 9*c
    T = (2 * a) + sqrt(b) + (9 * c);
    
    // (iv) H = sqrt(b^2 + p^2)
    H = sqrt(pow(b, 2) + pow(p, 2));

    printf("\nResults:\n");
    printf("(i) V = %.2f\n", V);
    printf("(ii) S = %.2f\n", S);
    printf("(iii) T = %.2f\n", T);
    printf("(iv) H = %.2f\n", H);

    return 0;
}
