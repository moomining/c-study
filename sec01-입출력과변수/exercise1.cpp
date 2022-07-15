/* 1. 두 숫자를 입력받아서 그 숫자의 합을 출력하는 프로그램을 만들어 보세요.*/
#include <stdio.h>

int main() {
    double a,b;

    printf("숫자 2개를 입력하세요 : ");
    scanf("%lf %lf", &a, &b);

    printf("합 : %lf\n", a+b);
}