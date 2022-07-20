//자연수 입력 : 12
// 12의 약수를 보여주는 프로그램

#include <stdio.h>

int main() {
    int num;
    printf("자연수를 입력해주세요.");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            if(i == num) {
                printf("%d\n", i);
                break;
            }
            printf("%d,", i);
        }
    }

}