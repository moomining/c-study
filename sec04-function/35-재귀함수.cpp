//재귀 함수 : 자기 자신의 정의 안에 자기가 존재하는 것 
//학(배울 학) 교(학교 교) recursion

#include <stdio.h>

void rec(int n) {
    if (n > 5) return;
    printf("n= %d\n", n);
    rec(n+1);
}

int main() {
    rec(1);
}