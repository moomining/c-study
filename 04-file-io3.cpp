#include <stdio.h>

int main() {
    FILE *in = fopen("04-file-io3.cpp", "r");
    char ch;
    while(!feof(in)) {  //end of file : ������ ���� �����ϸ� true�� ��ȯ
    //while(fscanf(in, "%c", &ch) != EOF)
    //fscanf�� while�� ������ �־���� �� ���� -> �Է¹��� ���ڿ��� ���̸� ��ȯ
    //file ���� �����ϸ� eof ��ȯ -1. 
        fscanf(in, "%c", &ch);
        printf("%c", ch);
    }

    fclose(in);
}