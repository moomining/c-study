#include <stdio.h>

struct ProductInfo {
    int num;
    char name[100];
    int cost;
};
int main() {
    ProductInfo myProduct = { 1, "한라봉", 19900};

    printf("상품 번호 : %d\n", &myProduct.num);
    printf("상품 이름 : %d\n", &myProduct.name);
    printf("가     격 : %d원\n", &myProduct.cost);

    printf("%d\n", &myProduct);

    printf("sizeof(myProduct) = %d\n", sizeof(myProduct));
}