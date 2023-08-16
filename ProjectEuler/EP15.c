/*************************************************************************
	> File Name: EP15.c
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Aug 2023 06:17:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
int fac[21] = {0};
long long solve(long long n){
    for(int i = 2; i <= 20; i++){
        if(n % i == 0 && fac[i] == 0){
            n /= i;
            fac[i] = 1;
        }    
    
    }
    return n;
}

int main(){
    long long  ans = 1;
    for(long long i = 21; i <= 40; i++){
        ans *= solve(i);
    }
    //15, 16, 18未作处理
    for(int i = 2; i <= 20 ; i++){
        if(fac[i] == 0)
            ans /= i;
    }
    printf("ans = %lld\n", ans);
    return 0;
}
