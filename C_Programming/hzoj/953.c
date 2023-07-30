/*************************************************************************
	> File Name: 953.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 07:26:05 AM CST
 ************************************************************************/

#include<stdio.h>
#define N 100

int cmp (int a, int b){
    return a > b ? a : b;
}

int max(int *arr, int n){
    if(n == 2){
        return cmp(arr[0], arr[1]);
    }
    return cmp(max(arr, n - 1), arr[n - 1]);
}

int main(){
    int arr[N] = {0}, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    printf("%d\n", max(arr, n));
    return 0;
}
