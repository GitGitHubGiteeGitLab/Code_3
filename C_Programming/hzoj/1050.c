/*************************************************************************
	> File Name: 1047.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 09:29:36 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 4000
void init_prime(int *prime, int n){
    for(int i = 2; i <= n; i++){
        if(prime[i])continue;
        prime[++prime[0]] = i;//存的是i
        for(int j = i, I = n / i + 1; j < I; j++){
            prime[i * j] = 1;
        }
    }
}

int main(){
    int *prime = calloc(N, sizeof(int));
    init_prime(prime, N);
    int i, count =0, n;
    scanf("%d", &n);
    for(i = 2; ; i++){
        if(prime [i + 1] - prime[i] == 2)count++;
        if(count == n)break;
    }
    printf("%d %d\n", prime[i], prime[i + 1]);
    return 0;
}

