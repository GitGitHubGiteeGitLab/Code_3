/*************************************************************************
	> File Name: 1047.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 09:29:36 AM CST
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
    printf("%d\n", prime[0]);
    return 0;
}

