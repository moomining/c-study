/* 
1. ���� �ϳ��� �Ű������� �޾�
�� ���� ¦���̸� 0, Ȧ���̸� 1�� ��ȯ�ϴ� �Լ��� �ۼ��غ�����.
*/

#include <stdio.h>

int parity(int n) {
    if(n %2 == 0) return 0;
    else return 1;    
}

int main() {
    printf("%d\n", parity(5));
    printf("%d\n", parity(-2));
}