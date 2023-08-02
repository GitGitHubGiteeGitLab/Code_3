/*************************************************************************
	> File Name: funcB.c
	> Author: 
	> Mail: 
	> Created Time: Wed 02 Aug 2023 11:03:05 AM CST
 ************************************************************************/

#include<stdio.h>
#include<add.h>
void funcB(int n){
    printf("funcB : %d * %d = %d\n", n, n-1, n * (n-1));
    add(n, n+1);
}
