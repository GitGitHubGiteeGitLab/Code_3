/*************************************************************************
	> File Name: compound_interest.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Jun 2023 06:32:29 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    double sum = 0;
    for(int i = 1; i <= 6; i++){
        sum = (sum + n)*(1 + 0.00417);
    }
    printf("$%.2lf\n", sum);
    return 0;
}
