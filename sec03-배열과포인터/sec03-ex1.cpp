/* 
100�� ���� ������ �Է¹޾�
ù �ٿ� ¦�� ���� ���ڵ��� ������� ����ϰ�,
���� �ٿ� Ȧ�� ��° ���ڵ��� ������� ����ϴ� ���α׷��� �����

�Է� ��
7
3 1 4 1 5 9 2

��� ��
1 1 9
3 4 5 2
*/

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < sizeof(arr)/sizeof(int); i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int j = 0; j < sizeof(arr)/sizeof(int); j += 2) {
        printf("%d ", arr[j]);
    }
    printf("\n");
}