#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n > 0) {
        printf("n�� ���");
    } else if(n == 0) {
        printf("n�� 0");
    } else {
        printf("n�� ����");
    }
}