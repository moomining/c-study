#include <stdio.h>

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //&arr[0]�� ���� �Ȱ��� 
    //�׳� arr�� arr�� �ּҰ� �� ���� 
    printf("arr�� �� : %d\n", arr);
    printf("arr�� �� : %d\n", arr + 1);
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        printf("&arr[%d] = %d\n", i, &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("/n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    for(int *ptr = arr; ptr < arr + 10; ptr++) {
        printf("%d\n", *ptr);
    }
    printf("\n");

}