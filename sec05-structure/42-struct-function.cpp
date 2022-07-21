#include <stdio.h>

struct Time {
    int h, m, s;

    int totalSec() {
        return 3600 * h + 60 * m + s; 
    }

};


int main() {
    Time t = { 1, 22, 48 };

    printf("%d시\n", t.h);
    printf("%d분\n", t.m);
    printf("%d초\n", t.s);

    printf("%d초",t.totalSec());
}