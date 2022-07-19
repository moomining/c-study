#include <stdio.h>

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};

    printf("%d\n", sizeof(arr)); //24
    printf("%d\n", sizeof(arr[0])); //12
    printf("%d\n", sizeof(arr[0][0])); //4
    printf("\n");
    printf("%d\n", &arr); //24
    printf("%d\n", &arr[0]); //12
    printf("%d\n", &arr[0][0]);
    printf("\n");

    int(*ptr)[3] = &arr[0];

    // 1. ptr[i] == arr[i]
    // 2. ptr[i][j] == arr[i][j]
    // ptr = arr

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

}