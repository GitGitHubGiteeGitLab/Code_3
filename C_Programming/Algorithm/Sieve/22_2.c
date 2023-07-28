/*************************************************************************
	> File Name: 22_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 05:26:21 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define N 10000000
int is_prime(int n){
    for(int i = 2, I  = sqrt(n) + 1; i < I; i++){//sqrt(n)只用算一次
        if(n % i)continue;
        return 0;
    }
    return 1;
}

int main(){
    for(int i = 2; i < N + 1; i++){
        if(!is_prime(i))continue;
        printf("%d\n", i);
    }
    return 0;
}
