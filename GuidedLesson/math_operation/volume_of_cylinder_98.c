/*************************************************************************
	> File Name: volume_of_cylinder_98.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Jun 2023 12:23:01 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    double r, h;
    scanf("%lf%lf", &r, &h);
    printf("%.2lf\n%.2lf\n", 3.14 * r * r, 3.14 * r * r * h);
    return 0;
}
