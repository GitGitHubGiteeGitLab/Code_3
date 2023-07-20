/*************************************************************************
	> File Name: 11.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2023 11:44:56 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N  100

int binary_search(int *arr, int n, int x){
    int head = 0, tail = n - 1, mid = 0;
    while(head <= tail){
        //mid = head + tail;
        mid = (head + tail) >> 1;
        if(arr[mid] == x)return mid;
        if(arr[mid] < x){
            head = mid + 1;
        }else{
            tail = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[MAX_N + 5] = {0};
    int n = 0, x = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    while(~scanf("%d", &x)){
        printf("find %d == %d", x, binary_search(arr, n, x));
    }
    return 0;
}
