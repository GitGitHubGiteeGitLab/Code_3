/*************************************************************************
	> File Name: 15_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 09:14:08 AM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int main(){
    int a, b;
    while(~scanf("%d%d", &a, &b)){
        printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    }
    return 0;
}
