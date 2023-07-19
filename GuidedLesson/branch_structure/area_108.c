/*************************************************************************
	> File Name: area_108.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Jun 2023 07:44:41 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    double m, n;
    scanf("%lf%lf", &m, &n);
    if(ch == 'r'){
        printf("%.2lf\n", m * n);
    }else{
        // 1 / 2 == 0
        printf("%.2lf\n", 1.0/2 * m * n);
    }
    return 0;
}
