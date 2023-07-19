/*************************************************************************
	> File Name: average_128.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Jun 2023 07:47:27 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000
int arr[MAX_N + 5] = {0};

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    double average = 1.0 * sum / n;
    printf("%.2f\n", average);
    return 0;
}
