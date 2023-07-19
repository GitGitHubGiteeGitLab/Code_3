/*************************************************************************
	> File Name: sum_2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Jun 2023 12:16:00 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    //n和sum都至少是长整型
    long long n;
    scanf("%lld", &n);
    long long  sum = n * (n + 1) / 2;
    printf("%lld\n", sum);
    return 0;
}
