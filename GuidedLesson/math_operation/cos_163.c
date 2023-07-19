/*************************************************************************
	> File Name: arccos_163.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Jun 2023 07:36:09 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main(){
    double a, b, angle, c;
    scanf("%lf%lf%lf", &a, &b, &angle);
    //角度向弧度制度的转型,pai == acos(-1)
    c = sqrt(a * a + b * b - 2 * a * b * cos(acos(-1) * angle  / 180));
    printf("%.6lf\n", c);
    return 0;
}
