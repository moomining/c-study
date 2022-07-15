/* 3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요. (Z 제외)*/
#include <stdio.h>

int main() {
    char a;
    printf("알파벳을 입력하세요 : ");
    scanf("%c", &a);
    int b = a + 1;
    printf("%c\n", b);
}