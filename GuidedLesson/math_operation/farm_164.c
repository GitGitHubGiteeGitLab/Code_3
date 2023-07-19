/*************************************************************************
	> File Name: farm_164.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Jun 2023 08:32:00 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int m, n, ans = 0;
    scanf("%d%d", &n, &m);
    if(n % m == 0){
        ans = n / m;
    }else{
        ans = n / m + 1;
    }
    printf("%d\n", ans);
    return 0;
}
