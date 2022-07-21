//팩토리얼
//5! = 5*4*3*2*1 =120
//n! = n * (n-1)!
#include <stdio.h>

//n을 매개변수 -> n!을 반환
int factorial(int n) {
    if(n == 1) return 1;
    return n * factorial(n-1);
}


int main() {
    int a;
    scanf("%d", &a);

    printf("%d\n",factorial(a));
}