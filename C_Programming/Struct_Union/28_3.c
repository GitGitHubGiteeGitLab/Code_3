/*************************************************************************
	> File Name: 28_3.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 08:20:19 AM CST
 ************************************************************************/

#include<stdio.h>

int is_little(){
    int a = 1;
    return ((char *)&a)[0];//&a地址,(char *)强转, [] = *()
}

int main(){
    if(is_little())printf("小端机\n");
    else printf("大端机\n");
}
