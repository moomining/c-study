#include <stdio.h>

struct ProductInfo {
    int num;
    char name[100];
    int cost;
};
int main() {
    ProductInfo myProduct = { 1, "�Ѷ��", 19900};

    printf("��ǰ ��ȣ : %d\n", &myProduct.num);
    printf("��ǰ �̸� : %d\n", &myProduct.name);
    printf("��     �� : %d��\n", &myProduct.cost);

    printf("%d\n", &myProduct);

    printf("sizeof(myProduct) = %d\n", sizeof(myProduct));
}