/*************************************************************************
	> File Name: test_12.c
	> Author: 
	> Mail: 
	> Created Time: Fri 23 Jun 2023 11:16:39 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 100

int main(){
    char str1[MAX_N + 5] = {0}, str2[MAX_N + 5] = {0};
    scanf("%s%s", str1, str2);
    int ret = strcmp(str1, str2);
    if(ret == 0){
        printf("str1 == str2\n");
    }else if(ret > 0){
        printf("str1 > str2\n");
    }else{
        printf("str1 < str2\n");
    }
    return 0;
}
