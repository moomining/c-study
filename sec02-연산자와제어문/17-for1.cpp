#include <stdio.h>

int main() {
    int a;
    printf("����� �Է����ּ��� : ");
    scanf("%d", &a);

    int b = 1;
    for(int i = 1; i <= a; i++) {
        b *= 2;
    }
    printf("%d\n", b);
}