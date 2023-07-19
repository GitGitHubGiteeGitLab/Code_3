/*************************************************************************
	> File Name: test_3.c
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Jun 2023 08:53:54 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    double x = 3.1415;
    double y;
    printf("x = %.2lf\n", x);
    scanf("%d%d%lf", &a, &b, &y);
    printf("a = %d, b = %d\n", a, b);
    printf("a / b = %d, a %% b = %d\n", a / b, a % b);
    printf("sqrt(%g) = %g\n", y, sqrt(y));
    printf("pow(%g , 1 / 2) = %g\n", y , pow(y , 1.0 / 2.0));
    return 0;
}
