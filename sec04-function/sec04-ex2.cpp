/* 4.
    문자열을 매개변수로 받아 그 문자열에서 공백을 제거하여 
    출력하는 함수를 작성하라
*/

#include <stdio.h>

void print_noSpace(char chaArr[]) {
    for(int i = 0; chaArr[i] != '\0'; i++) {
        if(chaArr[i] != ' ') {
            printf("%c", chaArr[i]);
        }
    }

}

int main() {
    print_noSpace("Hello, World!\n");
    print_noSpace("My name is Doodle\n");
}