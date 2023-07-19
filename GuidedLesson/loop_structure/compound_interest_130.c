/*************************************************************************
	> File Name: compound_interest_130.c
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Jun 2023 02:09:55 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    double sum = 0;
    for(int i = 1; i <= n; i++){
      sum = (m + sum) * (1 + 0.00417);
    }
    printf("$%.2lf\n", sum);
    return 0;
}
