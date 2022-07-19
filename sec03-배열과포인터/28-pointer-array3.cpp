#include <stdio.h>

int main() {
    char charArray[3][10] = { "Hello", "World", "Doodle"};
    char *p_str[3];

    for(int i = 0; i < 3; i++) {
        printf("%s\n", &charArray[i]);
    }

    for(int i = 0; i < 3; i++) {
        p_str[i] = charArray[i];
    }
    for(int i = 0; i < 3; i++) {
        printf("%s\n", p_str[i]);
    }
}