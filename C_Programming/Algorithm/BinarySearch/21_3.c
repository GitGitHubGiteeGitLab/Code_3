/*************************************************************************
	> File Name: 21_3.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 04:17:56 PM CST
 ************************************************************************/

#include<stdio.h>
//情况1:查找最后一个0
//0 0 0 0 1 1 1 1
//
int binary_search1(int *arr, int n){
    int head = -1, tail = n - 1, mid;
    while(head < tail){
        mid = head + ((tail - head + 1) >> 1);//+1防head ,tail差1，下取整导致的问题
        if(arr[mid] == 0)head = mid;
        else tail = mid - 1;
    }
    return head;
}


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
    int arr1[10] = {0,0,0,0,0,0,0,0,0,0};
    int arr2[10] = {1,1,1,1,1,1,1,1,1,1};
    printf("%d\n", binary_search1(arr1, 10));
    printf("%d\n", binary_search2(arr2, 10));
    return 0;
}
