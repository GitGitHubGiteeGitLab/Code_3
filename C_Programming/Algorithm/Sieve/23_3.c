/*************************************************************************
	> File Name: 23_3.c
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Jul 2023 09:12:37 AM CST
 ************************************************************************/

#include<stdio.h>
#define N 100
int prime[N] = {0};//初始时假设全为素数

void init_prime(int *prime){
    for(int i = 2; i < N + 1; i++){//先开始2,3,5,7均是素数，大部分合数可由他们产生
        if(prime[i])continue;//是合数就筛掉
        prime[++prime[0]] = i;//以prime[0]中的值为下标存储素数
        //I是N范围内i的最大倍数
        //j从i 开始避免2 * 3, 3 * 2 = 6 这种标记（i越小，I越大），但不能避免3*4 2*6=12这种标记
        //欧拉筛
        for(int j = i, I = N / i; j < I + 1; j++){
            prime[i * j] = 1;                               
        }
    }
}

int main(){
    init_prime(prime);
    for(int i = 1; i < prime[0] + 1; i++){
        printf("%d\n", prime[i]);
    }
    return 0;
}
