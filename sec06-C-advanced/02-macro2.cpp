#include <stdio.h>

#define SQUARE(X) ((X) * (X))


//�Ű����� �ִ� ��ũ�� ���� ���� �� ��ȣ�������
//���Ŀ� ������ ������ �ʴ´�.

int square(int a) {
    return a * a;
}

int max(int a, int b) {
    (a>b) ? a : b;
}
int main() {
    int a;
    scanf("%d", &a);

    printf("%d\n", SQUARE(a));
}