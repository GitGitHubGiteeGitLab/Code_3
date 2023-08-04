/*************************************************************************
	> File Name: EP02_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 04 Aug 2023 08:22:33 AM CST
 ************************************************************************/

#include<stdio.h>
#define N 4000000
int fib[40] = {0};

int main(){
    fib[1] = 1, fib[2] = 2;
    int n = 2, sum = 2;
    while(fib[n] + fib[n - 1] <= N){
        n++;
        fib[n] = fib[n-1] + fib[n-2];
        if(fib[n] & 1)continue;
        sum += fib[n];
    }
    printf("%d\n", n);
    printf("%d\n", sum);
    return 0;
}
