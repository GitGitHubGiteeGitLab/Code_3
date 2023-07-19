/*************************************************************************
	> File Name: 6.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Jun 2023 07:26:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 100

int main(){
    char filename[256] = {0};
    char w_file[256] = {0};
    scanf("%s%s" , filename , w_file);
    FILE *fin = fopen(filename ,"rb");
    FILE *fout = fopen(w_file , "wb");
    if(fin == NULL){
        printf("open %s failed\n",filename);
        return 0;
    }
    char buff[MAX_N + 1] = {0};
    while(feof(fin) == 0){
         memset(buff , 0 ,sizeof(buff));
         int res =  fread(buff , sizeof(char) ,MAX_N , fin);
         fwrite(buff, sizeof(char), res , fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
