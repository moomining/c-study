//prototype : 원형, 시제품 
//순서 바뀌어도 상관 없다.
#include <stdio.h>

void walk(int);
void rotate(int);
void drawSquare();

int main() {
    drawSquare();
}



void walk(int distance) {
    printf("%dcm를 걸었습니다.\n", distance);
}
//돌기 기능
void rotate(int angle) {
    printf("%d도를 돌았습니다.\n", angle);
}

void drawSquare() {
    for(int i = 1; i <= 4; i++) {
        walk(10);
        rotate(90);
    }
}
