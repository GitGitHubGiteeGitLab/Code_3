/*************************************************************************
	> File Name: calculate_the_volume_of_a_cylinder_98.c
	> Author: 
	> Mail: 
	> Created Time: Sat 24 Jun 2023 12:12:26 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    double r, h;
    scanf("%lf%lf", &r, &h);
    double s = 3.14 * r * r;
    double v = s * h;
    printf("%.2lf\n%.2lf\n", s, v);
    return 0;
}
