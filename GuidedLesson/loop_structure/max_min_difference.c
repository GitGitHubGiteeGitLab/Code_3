/*************************************************************************
	> File Name: max_min_difference.c
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Jun 2023 02:15:18 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000
int arr[MAX_N + 5] = {0};

int main(){
    int n, max, min;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        if(i == 1){
            max = arr[i];
            min = arr[i];
            continue;
        }
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d\n", max - min);
    return 0;
}
