#include <stdio.h>

int itemCnt = 0;
int money = 100;

int cost;

void buyItem(int cost) {
    //�������� ���.
    itemCnt++;
    money -= cost;
    printf("item purchased.\n");
    printf("item cnt : %d\n", itemCnt);

}

int main() {
    printf("Hello, Wolrd!\n");

    
    //�������� ���.
    buyItem(30);

    buyItem(50);
}