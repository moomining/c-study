#include <stdio.h>

int main() {
    int a = 10;

    int *ptr;
    ptr = &a;

    int **ptr_ptr;
    ptr_ptr = &ptr;

    printf("a = %d\n", a);
    printf("a의 주소값 : %d\n", &a);
    printf("---------------\n");
    printf("ptr = %d\n", ptr);
    printf("&ptr = %d\n", &ptr);
    printf("*ptr = %d\n", *ptr);
    printf("---------------\n");
    printf("*ptr_ptr = %d\n", *ptr_ptr);
    printf("**ptr_ptr = %d\n", **ptr_ptr);

}