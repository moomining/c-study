/* 2. ü��(kg, �Ǽ�)�� Ű(m,�Ǽ�)�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� ���弼��.*/
#include <stdio.h>

int main() {
    //BMI = w / t^2

    float kg,cm;

    printf("ü��(kg)�� �Է��ϼ��� : ");
    scanf("%f", &kg);
    printf("Ű(cm)�� �Է��ϼ��� : ");
    scanf("%f", &cm);

    float m = cm/100;

    float BMI = kg/(m*m);

    printf("����� ü���������� %f�Դϴ�.", BMI);
}