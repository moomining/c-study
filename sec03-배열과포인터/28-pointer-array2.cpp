#include <stdio.h>

int main() {
    char str[] = "Hello";

    //%s�� �ּҰ��� �˷��ָ� char�迭�� ��ü ���!
    printf("%s\n", &str[0]);
    printf("%d\n", &str[0]);
}