/* n = 4 
    1
    1 3
    1 3 5 
    1 3 5 7
*/

#include <stdio.h>

int main() {
    int n;
    printf("몇 줄 입력할지 입력 : ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n; i++) {
        for (int j = 1; j <= 2*i; j += 2) {
            printf("%d ", j);
        }
        printf("\n");
    }
}