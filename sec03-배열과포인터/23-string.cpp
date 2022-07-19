//문자열 : 문자들이 열거
#include <stdio.h>

int main() {
    char arr[] = "abc";
    // \0 이 뒤에 붙음 : 문자열의 끝이다를 나타냄 
    printf("%d\n", sizeof(arr) / sizeof(char));
}