/*************************************************************************
	> File Name: min_129.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Jun 2023 07:53:21 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000 
int arr[MAX_N + 5] = {0};

int main(){
    int n, tmp;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        if(i == 1) {
            tmp = arr[i];
            continue;
        } if(tmp > arr[i])tmp = arr[i];
    }
    printf("%d\n", tmp);
    return 0;
}
