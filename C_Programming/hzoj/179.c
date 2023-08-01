/*************************************************************************
	> File Name: 179.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 12:34:40 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d %d", &p, &q);
    printf("%.4lf\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double top = 20, bottom = -20, mid;
    do{
        mid = bottom + (top - bottom) / 2;
        if(f(p, q, mid) * f(p, q, top) < 0)bottom = mid;//零点定理
        else top = mid;
    }while(fabs(func(p, q, mid)) > EPSILON);
    return mid;
}

double f(int p, int q, double x) {
    return p * x + q;
}
