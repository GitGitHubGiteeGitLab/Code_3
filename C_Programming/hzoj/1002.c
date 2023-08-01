/*************************************************************************
	> File Name: 1002.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 07:10:10 PM CST
 ************************************************************************/

#include<stdio.h>

int binary_search2(int *arr, int n){
    int head = 0, tail = n, mid;
    while(head < tail){
        mid = head + ((tail - head) >> 1);//不需要+1：刚好利用相邻下取整
        if(arr[mid] == 0)head = mid + 1;
        else tail = mid ;
    }
    return head == n ? -1 : head;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }
    printf("%d\n", binary_search2(arr, n));
    return 0;
}
