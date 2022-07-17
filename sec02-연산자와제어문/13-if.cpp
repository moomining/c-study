//중첩 if문
//중괄호 코딩스타일

#include <stdio.h>

int main() {
    int a,b,c;

    scanf("%d%d%d", &a, &b, &c);

    if(a > b) {
        if(a > c)
            printf("최대는 %d\n", a);
        else
            printf("최대는 %d\n", c);
        
    } else if (b > c)
        printf("최대는 %d\n", b);
    else
        printf("최대는 %d\n", c);
}