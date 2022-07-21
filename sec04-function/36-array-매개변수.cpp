#include <stdio.h>

void printArr(int arr[4]) {
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[4] = { 1, 2, 3, 4 };

    printArr(arr);
}