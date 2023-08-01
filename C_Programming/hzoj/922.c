/*************************************************************************
	> File Name: 922.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 11:38:13 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char str[20] = {0};
    int count = 0;
    while(~scanf("%s", str))count++;
    printf("%d\n", count);
    return 0;
}
