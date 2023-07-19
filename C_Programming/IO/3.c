/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Jun 2023 02:27:58 PM CST
 ************************************************************************/
#include<stdio.h>
#include <string.h>

int main (){
    char str[100]={0};//最多存放99个字符的字符串
    while(scanf("%[^\n]",str) != EOF){
         getchar();//从缓冲区取一个字符
         printf("%s\n",str);
         printf("%ld\n",strlen(str));
    }//str本身就是一个地址
    return 0;
} 
