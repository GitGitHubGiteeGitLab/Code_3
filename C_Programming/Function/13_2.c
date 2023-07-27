/*************************************************************************
	> File Name: 13_2.c
	> Author: 
	> Mail: 
	> Created Time: Thu 27 Jul 2023 08:01:02 PM CST
 ************************************************************************/

#include<stdio.h>

int fac(int n, int result){
    if(n == 1)return result;
    return fac(n - 1, n *result);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", fac(n, 1));
    return 0;
}
