/*************************************************************************
	> File Name: 898.c
	> Author: 
	> Mail: 
	> Created Time: Wed 26 Jul 2023 10:16:52 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n, m, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        if(m & 1)sum += m;
    }
    printf("%d\n", sum);
}
