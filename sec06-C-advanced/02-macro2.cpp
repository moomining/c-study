#include <stdio.h>

#define SQUARE(X) ((X) * (X))


//매개변수 있는 매크로 만들 때는 다 괄호해줘야지
//계산식에 오류가 생기지 않는다.

int square(int a) {
    return a * a;
}

int max(int a, int b) {
    (a>b) ? a : b;
}
int main() {
    int a;
    scanf("%d", &a);

    printf("%d\n", SQUARE(a));
}