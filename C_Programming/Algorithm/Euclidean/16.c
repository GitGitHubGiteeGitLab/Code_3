/*************************************************************************
	> File Name: 16.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 04:41:14 PM CST
 ************************************************************************/

#include<stdio.h>

int ex_gcd(int a, int b, int *x, int *y){
    if(b == 0){
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1;
    int ret = ex_gcd(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 -(a / b) * y1;
    return ret;
}


int main(){
    int a, b, x, y;
    while(~scanf("%d%d", &a, &b)){
        int ret = ex_gcd(a, b, &x, &y);
        printf("gcd(%d, %d) = %d\nx = %d, y = %d\n",  a, b, ret, x, y);
    }
    return 0;
}
