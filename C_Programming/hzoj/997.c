/*************************************************************************
	> File Name: 997.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2023 12:02:02 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N  100000

int binary_search(int *arr, int n, int x){
    int head = 0, tail = n - 1, mid = 0;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(arr[mid] == x)return mid;
        if(arr[mid] < x){
            tail = mid - 1;
        }else {
            head = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n, x, arr[MAX_N] = {0};
    scanf("%d%d", &n, &x);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", binary_search(arr, n, x));
    return 0;
}

