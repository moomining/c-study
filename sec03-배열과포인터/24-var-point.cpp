#include <stdio.h>
//������ (pointer) : ������ �ּҸ� �����ϴ� ����
// ptr
int main() {
    int a = 20;
    char c = 'h';
    //������ ������ ���� *ptr_������
    int *ptr_a;
    char *ptr_c;

    ptr_a = &a;
    ptr_c = &c;

    printf("a�� �� : %d\n", a);
    printf("a�� �ּҰ� : %d\n", &a);
    printf("ptr_a�� ����� �� : %d\n", ptr_a);
    printf("ptr_a�� ����Ű�� ������ �� : %d\n", *ptr_a);

}