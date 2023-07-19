/*************************************************************************
	> File Name: area_and_perimeter_of_a_rectangle.c
	> Author: 
	> Mail: 
	> Created Time: Sat 24 Jun 2023 11:41:23 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    double length, width;
    scanf("%lf%lf", &length, &width);
    printf("%.2lf\n%.2lf\n", (length + width) * 2, length * width);
    return 0;
}
