/* 4.
    ���ڿ��� �Ű������� �޾� �� ���ڿ����� ������ �����Ͽ� 
    ����ϴ� �Լ��� �ۼ��϶�
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