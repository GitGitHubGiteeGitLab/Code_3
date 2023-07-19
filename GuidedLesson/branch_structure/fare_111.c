/*************************************************************************
	> File Name: fare_111.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Jun 2023 08:10:35 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    if(N <= 3){
        printf("14\n");
    }else{
        printf("%.1lf\n", 14 + 2.3 * (N - 3));
    }
    return 0;
}
