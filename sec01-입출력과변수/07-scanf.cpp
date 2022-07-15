#include <stdio.h>

int main() {
    // int a,b;

    // scanf("%d%d", &a, &b); //& : 포인터

    // int hap = a + b;
    // int cha = a - b;
    // int gop = a * b;
    // int mok = a / b;

    // printf("%d + %d = %d\n", a, b, hap);
    // printf("%d - %d = %d\n", a, b, cha);
    // printf("%d * %d = %d\n", a, b, gop);
    // printf("%d / %d = %d\n", a, b, mok);

    float c,d;
    scanf("%f%f", &c, &d);

    printf("%f + %f = %.2f\n", c, d, c+d);
    printf("%f - %f = %.2f\n", c, d, c-d);
    printf("%f * %f = %.4f\n", c, d, c*d);
}