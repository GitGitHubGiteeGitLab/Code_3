/*************************************************************************
	> File Name: 21_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 01:07:59 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

double msqrt(double x){//x必然非负
    #define EPSL  1e-9
    double head = 0, tail = x + 1, mid;//tail = x + 1,防小数
    while(tail - head > EPSL){
        mid = head + (tail - head) / 2;
        //不用判等
        if(mid * mid < x)head = mid;
        else tail = mid;
    }
    #undef EPSL
    return head;//tail,head 也可以
}


int main(){
    double a;
    while(~scanf("%lf", &a)){
        printf("sqrt(%g)  = %g\n", a, sqrt(a));
        printf("msqrt(%g) = %g\n", a, msqrt(a));
    }
    return 0;
}
