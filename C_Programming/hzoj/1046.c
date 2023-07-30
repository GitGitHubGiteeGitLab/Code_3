/*************************************************************************
	> File Name: 1046.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 08:56:33 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

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
    int n;
    scanf("%d", &n);
    int *prime = calloc(n + 1, sizeof(int));
    init_prime(prime, n);
    for(int i = 1; i <= prime[0]; i++){
        printf("%d\n", prime[i]);
    }
    return 0;
}

