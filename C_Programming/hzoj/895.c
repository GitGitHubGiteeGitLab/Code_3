/*************************************************************************
	> File Name: 895.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 11:00:28 AM CST
 ************************************************************************/

#include<stdio.h>

int solve(int n){
    int count = 0;
    while(n != 1){
        if(n & 1)n = 3 * n + 1;
        n >>= 1;
        count++;
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", solve(n));
    return 0;
}
