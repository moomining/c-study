//prototype : ����, ����ǰ 
//���� �ٲ� ��� ����.
#include <stdio.h>

void walk(int);
void rotate(int);
void drawSquare();

int main() {
    drawSquare();
}



void walk(int distance) {
    printf("%dcm�� �ɾ����ϴ�.\n", distance);
}
//���� ���
void rotate(int angle) {
    printf("%d���� ���ҽ��ϴ�.\n", angle);
}

void drawSquare() {
    for(int i = 1; i <= 4; i++) {
        walk(10);
        rotate(90);
    }
}
