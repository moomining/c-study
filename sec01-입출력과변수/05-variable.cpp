#include <stdio.h>

int main() {
    // int : 32비트 (4바이트), 정수를 담는 데 쓰임
    // int a = 5;
    // int b = 3;

    // int hap = a + b;
    // int cha = a - b;
    // int gop = a * b;
    // int mok = a / b;
    // int namuji = a % b;

    // printf("%d + %d = %d\n", a, b, hap);
    // printf("%d - %d = %d\n", a, b, cha);
    // printf("%d * %d = %d\n", a, b, gop);
    // printf("%d / %d = %d\n", a, b, mok);
    // printf("%d %% %d = %d\n", a, b, namuji);

    //float : 32비트 (4바이트), 실수 부동 소수점(floating point)
    //double : float 2배
    float a = 9.8;
    float b = 3.14;

    float hap = a + b;
    float cha = a - b;
    float gop = a * b;
    float mok = a / b;

    printf("%.2f + %.2f = %.2f\n", a, b, hap);
    printf("%f - %f = %f\n", a, b, cha);
    printf("%f * %f = %f\n", a, b, gop);
    printf("%f / %f = %f\n", a, b, mok);
}