#include <stdio.h>

typedef struct { float real; float imag; } complex;

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

int main() {
    complex n1 = {2.5, 3.5}, n2 = {1.5, 2.0}, sum;
    sum = add(n1, n2);
    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}
