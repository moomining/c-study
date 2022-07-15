/* 2. 체중(kg, 실수)과 키(m,실수)를 입력받아서 체질량 지수를 구하는 프로그램을 만드세요.*/
#include <stdio.h>

int main() {
    //BMI = w / t^2

    float kg,cm;

    printf("체중(kg)을 입력하세요 : ");
    scanf("%f", &kg);
    printf("키(cm)를 입력하세요 : ");
    scanf("%f", &cm);

    float m = cm/100;

    float BMI = kg/(m*m);

    printf("당신의 체질량지수는 %f입니다.", BMI);
}