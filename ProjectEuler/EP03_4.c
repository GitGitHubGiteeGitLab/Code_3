/*************************************************************************
	> File Name: EP03_4.c
	> Author: 
	> Mail: 
	> Created Time: Wed 09 Aug 2023 11:13:51 PM CST
 ************************************************************************/

#include<stdio.h>
#define N 600851475143LL
int main(){
    long long  ans = 0, i = 2, num = N;
    while(i * i <= num){
        //合数= 素因子的幂相乘
        if(num % i == 0)ans = i;
        while(num % i == 0)num /= i;
        i++;
    }
    if(num != 1)ans = num;
    printf("%lld\n", ans);
    return 0;
}


