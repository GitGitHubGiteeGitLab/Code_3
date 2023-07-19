/*************************************************************************
	> File Name: BMI.c
	> Author: 
	> Mail: 
	> Created Time: Sun 25 Jun 2023 07:57:22 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    double w, h;
    scanf("%lf%lf", &w, &h);
    printf("%.2lf\n", w / (h * h));
    return 0;
}
