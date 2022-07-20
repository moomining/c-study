#include <stdio.h>

int main() {
    int arr[] = { 3, 1, 2, 4, 5,6, 7};

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}