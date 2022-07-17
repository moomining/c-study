// 비교 연산자, 논리 연산자

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d", &a, &b);

    //bool : 진리값 저장용 변수 (1바이트)
    bool p = a > b;

    printf("a>b는 %d이다.", p);
}