/*************************************************************************
	> File Name: funcA.c
	> Author: 
	> Mail: 
	> Created Time: Wed 02 Aug 2023 10:47:11 AM CST
 ************************************************************************/

#include<stdio.h>
#include<add.h>
void funcA(int n) {
    printf("funcA : n = %d\n", n);
    add(n, n-1);
    return;
}
