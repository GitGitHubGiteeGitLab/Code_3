/*************************************************************************
	> File Name: 15_3.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 09:37:56 AM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main(){
    int a, b;
    while(~scanf("%d%d", &a, &b)){
        printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
        printf("lcm(%d, %d) = %d\n", a, b, lcm(a, b));
    }
    return 0;
}


