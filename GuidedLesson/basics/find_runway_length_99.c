/*************************************************************************
	> File Name: find_runway_length_99.c
	> Author: 
	> Mail: 
	> Created Time: Sat 24 Jun 2023 12:22:28 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    double a, v;
    scanf("%lf%lf", &v, &a);
    printf("%.2lf\n", (v * v) / (2 * a));
    return 0;
}
