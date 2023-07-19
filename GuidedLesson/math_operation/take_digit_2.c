/*************************************************************************
	> File Name: take_digit_2.c
	> Author: 
	> Mail: 
	> Created Time: Sun 25 Jun 2023 07:49:31 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n%d\n%d\n", n / 100, (n / 10) % 10 , n % 10);
    return 0;
}
