/*************************************************************************
	> File Name: 15.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 09:01:51 AM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b){
    if(b == 0)return a;
    return gcd(b, a % b);
}

int main(){
    int a, b;
    while(~scanf("%d%d", &a, &b)){
        printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    }
    return 0;
}
