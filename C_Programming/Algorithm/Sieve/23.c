/*************************************************************************
	> File Name: 23.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 09:48:29 PM CST
 ************************************************************************/

#include<stdio.h>
#define N 10000000
int prime[N] = {0};//初始时假设全为素数

void init_prime(int *prime){
    for(int i = 2; i < N + 1; i++){//先开始2,3,5,7均是素数，大部分合数可由他们产生
        if(prime[i])continue;//是合数就筛掉
        //I是N范围内i的最大倍数
        for(int j = 2, I = N / i; j < I + 1; j++){
            prime[i * j] = 1;                               
        }
    }
}

int main(){
    init_prime(prime);
    for(int i = 2; i < N + 1; i++){
        if(prime[i])continue;
        printf("%d\n", i);
    }
    return 0;
}
