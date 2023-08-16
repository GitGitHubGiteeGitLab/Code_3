/*************************************************************************
	> File Name: exercise_EP07_2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Aug 2023 10:37:39 PM CST
 ************************************************************************/

#include<stdio.h>
#define N 10001
int prime[N];
void is_prime(int *prime){
    int cnt = 0;
    for(int i = 2; i < N; i++){
        if(prime[i] != 0)continue;
        prime[i] = i;
        for(int j = 2, I = N / i; j <= I; j++){
            prime[i * j] = i;
        }
    }
}

int main(){
    is_prime(prime);
    for(int i = 2; i < 100; i++){
        printf("prime[%d] = %d\n", i, prime[i]);
    }
    return 0;
}
