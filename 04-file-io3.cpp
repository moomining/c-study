#include <stdio.h>

int main() {
    FILE *in = fopen("04-file-io3.cpp", "r");
    char ch;
    while(!feof(in)) {  //end of file : 파일의 끝에 도달하면 true를 반환
    //while(fscanf(in, "%c", &ch) != EOF)
    //fscanf를 while문 안으로 넣어버릴 수 있음 -> 입력받은 문자열의 길이를 반환
    //file 끝에 도달하면 eof 반환 -1. 
        fscanf(in, "%c", &ch);
        printf("%c", ch);
    }

    fclose(in);
}