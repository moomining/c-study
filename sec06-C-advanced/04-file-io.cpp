#include <stdio.h>

int main() {
    FILE *in, *out; //stream 
    int n;

    in = fopen("input.txt", "r"); // r / w / a(append)
    out = fopen("output.txt", "a");
    
    fscanf(in, "%d", &n);
    fprintf(out, "%d\n", n);

    fclose(in);
    fclose(out);
}