#include <stdio.h>
//������ �迭 : �����͵��� �迭
//�迭 ������ : �迭�� ����Ű�� ������ 
int main() {
    //cf) int (*ptr)[4]
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    int arr[4] = {1,2,3,4};
    int *ptr[4];

    for(int i = 0;i < sizeof(arr)/sizeof(int); i++) {
        ptr[i] = &arr[i];
    }
    printf("\n");
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        printf("%d ", *ptr[i]);
    }
   
}