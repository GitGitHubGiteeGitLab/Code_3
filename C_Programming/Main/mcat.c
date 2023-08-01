/*************************************************************************
	> File Name: mcat.cmZ	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 08:40:43 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 200
int main(int argc, char *argv[]){
    if(argc == 1){
        printf("usage %s file\n", argv[0]);
        exit(1);
    }
    FILE *fp = fopen(argv[1], "rb");
    if(fp == NULL){
        printf("cat: %s: No such file or directory\n", argv[1]);
        exit(1);
    }
    char buff[N] = {0};
    while(feof(fp) == 0){
        memset(buff, 0, sizeof(buff));
        fread(buff, sizeof(char), N, fp);
        printf("%s", buff);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
