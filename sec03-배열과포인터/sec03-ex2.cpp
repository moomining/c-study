/* 
10*10 ������ ������ ������ �迭�� �Է¹޾�
�� �迭�� �� ���� ����� ���� ����ϴ� ���α׷� �����

�Է� �� 
3 4
4 2 6 3
7 9 3 4
5 1 2 1

��� ��
15
23
9
*/
#include <stdio.h>

int main() {
    int i,j;
    scanf("%d", &i);
    scanf("%d", &j);

    int arr[i][j];
    for(int k =0; k < i ; k++) {
        for(int l =0; l < j; l++){
            scanf("%d", arr[k][l]);
        } 
    }

    int sum[i];
    for(int k = 0; k < i; k++) {
        for(int l = 0; l < j; l++) {
            sum[k] += arr[k][l];
        }
        printf("%d\n", sum[k]);
    }


}