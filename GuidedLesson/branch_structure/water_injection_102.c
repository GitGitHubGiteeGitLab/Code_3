/*************************************************************************
	> File Name: water_injection_102.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Jun 2023 02:26:43 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int a, b, c, t;
    scanf("%d%d%d%d", &a, &b, &c, &t);
    double a1 = 1.0 / a, b1 = 1.0 / b, c1 = 1.0 / c;
    double w = (a1 + b1) * t;
    double time = t + (1 - w) / (a1 + b1 - c1);
    printf("%.2lf\n", time);
    return 0;
}
