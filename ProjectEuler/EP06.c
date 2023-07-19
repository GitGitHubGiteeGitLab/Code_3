/*************************************************************************
	> File Name: EP06.c
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Jul 2023 10:35:22 AM CST
 ************************************************************************/

#include<stdio.h>
#define n  100

/*
int main(){
    int s1 = 0, s2 = 0;
    for(int i = 1; i <= 100; i++){
        s1 += i * i;
    }
    s2 = 100 *(1 + 100) / 2;
    s2 *= s2;
    printf("%d\n", s2 - s1);
    return 0;
}
*/


int main(){
    int sum1 = 5050;
    //平方和公式
    int sum2 = n * (n + 1) * (2 * n + 1) / 6;
    printf("%d\n", sum1 * sum1 - sum2);
    return 0;
}
