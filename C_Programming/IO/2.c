/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Jun 2023 09:16:21 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n = 0;
    char buff[12] = {0};
    scanf("%d" , &n);
    printf("%d\n" , sprintf(buff ,"%d", n));
    return 0;
}
