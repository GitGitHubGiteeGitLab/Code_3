/*************************************************************************
	> File Name: EP05_2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 09 Aug 2023 09:52:14 PM CST
 ************************************************************************/

#include<stdio.h>

//递归实现gcd
int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int main(){
    int ans = 1;
    for(int i = 1; i <= 20; i++){
        //i能整除ans就不需要计算
        if(ans % i == 0)continue;
        //先除后乘防中间溢出
        ans = ans / gcd(ans, i) * i;
    }
    printf("%d\n", ans);
}
