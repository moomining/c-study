#include <stdio.h>

//��� : ������ �ʴ� �� 
//���� : ���� �� �ִ� ��

//const, macro, enum

//��ũ�� ! 
#define PI 3.14159
// �޸𸮻� ������ �� �ƴ�. 

int main() {

    float a = PI;

    float b = PI * 2;

    printf("���� = %.2f\n", PI);
    // printf("&PI = %d\n", &PI); // ���� �ּҰ��� ����. 
    printf("���� = %.2f\n", b);
}
