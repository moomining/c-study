/* 
100개 이하 정수를 입력받아
첫 줄에 짝수 번쨰 숫자들을 순서대로 출력하고,
다음 줄에 홀수 번째 숫자들을 순서대로 출력하는 프로그램을 만들라

입력 예
7
3 1 4 1 5 9 2

출력 예
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