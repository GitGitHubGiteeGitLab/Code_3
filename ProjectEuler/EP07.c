/*************************************************************************
	> File Name: EP07.c
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Aug 2023 10:06:11 PM CST
 ************************************************************************/

#include<stdio.h>
#define N 10000000
int prime[N];
void is_prime(int *prime){
    int cnt = 0;
    for(int i = 2; i < N; i++){
        if(prime[i] == 1)continue;
        cnt++;
        if(cnt == 10001)prime[0] = i;
        for(int j = i, I = N / i; j <= I; j++){
            prime[i * j] = 1;
        }
    }
}

int main(){
    is_prime(prime);
    printf("%d\n", prime[0]);
    return 0;
}
