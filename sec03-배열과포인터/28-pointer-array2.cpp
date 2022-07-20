#include <stdio.h>

int main() {
    char str[] = "Hello";

    //%s는 주소값을 알려주면 char배열을 전체 출력!
    printf("%s\n", &str[0]);
    printf("%d\n", &str[0]);
}