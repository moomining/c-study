#include <stdio.h>

int main()
{
    FILE *in; // stream
    int n;

    in = fopen("intput.txt", "r"); // r / w / a(append)

    if (in != nullptr)
    {
        fscanf(in, "%d", &n);
        printf("%d\n", n);

        fclose(in);
    }
}