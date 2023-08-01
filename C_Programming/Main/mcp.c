/*************************************************************************
	> File Name: mcp.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 10:20:56 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 255

void get_filenam(const char* str, char *file){
    int offset = 0;
    for(int i = 0; str[i]; i++){
        if(str[i] == '/')offset = i + 1;
    }
    strcpy(file, str + offset);
}

int main(int argc, char *argv[]){
    if(argc < 3){
        printf("usage: %s file1 file2\n",argv[0]);
        exit(1);
    }
    FILE *fin = fopen(argv[1], "rb");
    if(fin == NULL){
        printf(" mcp: cannot stat '%s': No such file or directory", argv[1]);
        exit(1);
    }
    char filename[N] = {0};
    get_filenam(argv[1], filename);
    int i = strlen(argv[2]);
    if(argv[2][i-1] == '/'){
        strcat(argv[2] + i, filename);
    }
    FILE *fout = fopen(argv[2], "wb");
    char buff[N];
    while(feof(fin) == 0){
        memset(buff, 0, sizeof(buff));
        int size = fread(buff, sizeof(char), N,fin);
        fwrite(buff, sizeof(char), size, fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
