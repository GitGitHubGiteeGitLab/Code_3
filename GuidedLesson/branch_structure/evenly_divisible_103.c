/*************************************************************************
	> File Name: evenly_divisible_103.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Jun 2023 07:16:00 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    a % b == 0 ? printf("YES\n") : printf("NO\n");
    return 0;
}
