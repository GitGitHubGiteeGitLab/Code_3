/*************************************************************************
	> File Name: 20.c
	> Author: 
	> Mail: 
	> Created Time: Wed 26 Jul 2023 09:29:38 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 10000

int main(){
    int *arr = calloc(N, sizeof(int));
    printf("%d\n", arr[2333]);
    return 0;
}

int main1(){
    int *arr = malloc(sizeof(int) * N);
    arr[123] = 456;
    printf("%d\n", arr[123]);
    return 0;
    
}
