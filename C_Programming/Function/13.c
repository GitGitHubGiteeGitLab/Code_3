/*************************************************************************
	> File Name: 13.c
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Jul 2023 01:56:16 PM CST
 ************************************************************************/

#include<stdio.h>

int fac(int n){
    if(n == 0)return 1;
    if(n == 1)return 1;
    return  n * fac(n - 1);
}

int main(){
    int n;
    while(~scanf("%d", &n)){
        printf("%d! = %d\n", n, fac(n));
    }
    return 0;
}
