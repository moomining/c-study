#include <stdio.h>

struct Time {
    int h, m, s;

    int totalSec() {
        return 3600 * h + 60 * m + s; 
    }

};


int main() {
    Time t = { 1, 22, 48 };

    printf("%d��\n", t.h);
    printf("%d��\n", t.m);
    printf("%d��\n", t.s);

    printf("%d��",t.totalSec());
}