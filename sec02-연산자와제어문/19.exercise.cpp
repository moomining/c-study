#include <stdio.h>

// 1. �������� �Է�
// 90~100 A
// 80~ 89 B
// 70~ 79 C
// 60~ 69 D
// 0 ~ 59 F

int main() {
    float score;
    printf("���������� �Է��ϼ��� : ");
    scanf("%d", &score);

    if(score > 100 || score < 0) {
        printf("�߸� �Է��ϼ̽��ϴ� \n");
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

