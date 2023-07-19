/*************************************************************************
	> File Name: n_multiply.c
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Jun 2023 02:20:22 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000
int arr[MAX_N + 5] = {0};

int main(){
    int n;
    long long multiply_sum = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        multiply_sum *= arr[i];
    }
    printf("%lld\n", multiply_sum);
    return 0;
}

