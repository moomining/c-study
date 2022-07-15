#include <stdio.h>

int main() {
    int a;

    printf("127 이내의 숫자 입력 : ");
    scanf("%d", &a);
    printf("%d의 ASCII값 : %c\n", a, a);
}