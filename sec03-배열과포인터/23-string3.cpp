#include <stdio.h>
#include <string.h>
//

int main() {
    char str1[] = "Hello";
    char str2[100];

    int length = sizeof(str1) / sizeof(char) - 1;
    int len;

    //NEW CONCEPT
    len = strlen(str1);

    printf("문자열의 길이는 %d\n", len);

    // 복사할 곳, 복사할 대상
    strcpy(str2, str1);

    printf("str2의 값 : %s\n", str2);

    char str3[100] = "Hello";

    strcat(str3, " World!");
    printf("%s\n", str3);

    char str4[] = "sample";
    char str5[] = "simple";

    //-1 : 사전 순으로 더 작다
    // 1 : 사전 순으로 더 크다
    int cmp = strcmp(str4, str5);
    
    printf("%d\n", cmp);
}