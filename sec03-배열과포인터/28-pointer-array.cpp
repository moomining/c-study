#include <stdio.h>
//포인터 배열 : 포인터들이 배열
//배열 포인터 : 배열을 가리키는 포인터 
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