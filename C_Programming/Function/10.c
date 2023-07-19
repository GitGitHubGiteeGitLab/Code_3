/*************************************************************************
	> File Name: 10.c
	> Author: 
	> Mail: 
	> Created Time: Wed 21 Jun 2023 06:39:16 PM CST
 ************************************************************************/
/*
*功能：传递进来一个整数，根据整数的取值范围，对应输出分段函数的值
*x < 0, y = -x;
* x >= 0 && x <100, y = 2 * x - 1;
*x >= 100, y = sqrt(x);
*/
#include<stdio.h>
#include<math.h>
int func1(int x){
    return -x;
}

int func2(int x){
    return 2 * x - 1;
}

double func3(int x){
    return sqrt(x);
}
double output(int (*f1)(int), int (*f2)(int), double(*f3)(int), int x){
    if(x < 0){
        printf("func1:");
        return f1(x);
    }
    else if(x < 100){
        printf("func2:");
        return f2(x);
    }
    printf("func3:");
    return f3(x);
}
int main(){
    int x;
    while(~scanf("%d", &x)){
        printf("%g\n", output(func1, func2, func3, x));
    }
    return 0;
}
