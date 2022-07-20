// 일의 자릿수가 3, 6, 9인 경우 * 을 출력
// 1 2 * 4 5 * 7 8 * 10 11 12 *  ... n까지

#include <stdio.h>

int main() {
    int n;
    printf("몇까지 출력할지 입력하세요 : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int k = i % 10;
        if (k == 3 || k == 6 || k == 9) {
            printf("* ");
        } else {
            printf("%d ", i); 
        }

    }
}