#include <stdio.h>

// 1. 시험점수 입력
// 90~100 A
// 80~ 89 B
// 70~ 79 C
// 60~ 69 D
// 0 ~ 59 F

int main() {
    float score;
    printf("시험점수를 입력하세요 : ");
    scanf("%d", &score);

    if(score > 100 || score < 0) {
        printf("잘못 입력하셨습니다 \n");
    } else {
        if (score >= 90) 
            printf("A\n");
        else if (80 <= score)
            printf("B\n");
        else if (70 <= score)
            printf("C\n");
        else if (60 <= score)
            printf("D\n");
        else
            printf("F\n");
        
    }
}

