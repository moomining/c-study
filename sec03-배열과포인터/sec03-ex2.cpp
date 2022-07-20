/* 
10*10 이하의 정수형 이차원 배열을 입력받아
그 배열의 각 행의 요소의 합을 출력하는 프로그램 만들기

입력 예 
3 4
4 2 6 3
7 9 3 4
5 1 2 1

출력 예
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