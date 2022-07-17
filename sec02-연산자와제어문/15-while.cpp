// ¹Ýº¹¹® (while)

#include <stdio.h>

int main() {
    int i = 1;
    int sum;
    while(i < 11) {
        sum += i;
        i++;
    }
    printf("%d", sum);
}