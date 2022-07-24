#include <stdio.h>

//상수 : 변하지 않는 수 
//변수 : 변할 수 있는 수

//const, macro, enum

//매크로 ! 
#define PI 3.14159
// 메모리상에 저장한 게 아님. 

int main() {

    float a = PI;

    float b = PI * 2;

    printf("파이 = %.2f\n", PI);
    // printf("&PI = %d\n", &PI); // 현재 주소값이 없다. 
    printf("파이 = %.2f\n", b);
}
