/*************************************************************************
	> File Name: length_of_lastWord_149.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 07:49:20 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 50

int main(){
    char str[MAX_N + 5] = {0}; 
    scanf("%[^\n]s", str);
    int len = strlen(str);
    int pos = 0;//pos是最后一个空格的位置
    for(int i = 0; i < len; i++){
        if(str[i] == ' ')pos = i + 1;
    }
    printf("%d\n", len - pos);
    return 0;
}
