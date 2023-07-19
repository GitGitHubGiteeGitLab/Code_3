/*************************************************************************
	> File Name: 5.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Jun 2023 03:54:53 PM CST
 ************************************************************************/
#include<stdio.h>

int main(){
    char filename[255] = {0};
    char w_file[255] = {0};
    scanf("%s%s" , filename , w_file);//要提供读写两个文件的名称
    FILE *fp = fopen(filename,"r");
    FILE *fout = fopen(w_file , "a");
    if(fp == NULL){
        printf("open failed\n");
        return 0;
    }
    char buff;
    while(fscanf(fp,"%c",&buff) != EOF){//只要你是字符就归我管
       // printf("%c",buff);
        fprintf(fout,"%c",buff);
    }   
    fclose(fp);
    fclose(fout);
    return 0;
}
