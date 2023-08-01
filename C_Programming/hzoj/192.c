/*************************************************************************
	> File Name: 192.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 01:57:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define N 1e9
#define EPSI 1e-5

double solve(int a){
    double top = N, bottom =0, mid;
    do{
        mid = bottom + (top - bottom) / 2;
        if(exp(mid) * mid >= a)top = mid;
        else bottom = mid;
    }while(top - bottom > EPSI);
    return mid;
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%.4lf\n", solve(a));
    return 0;
}
