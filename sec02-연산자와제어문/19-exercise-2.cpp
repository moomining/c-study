//�ڿ��� �Է� : 12
// 12�� ����� �����ִ� ���α׷�

#include <stdio.h>

int main() {
    int num;
    printf("�ڿ����� �Է����ּ���.");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            if(i == num) {
                printf("%d\n", i);
                break;
            }
            printf("%d,", i);
        }
    }

}