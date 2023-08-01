/*************************************************************************
	> File Name: 1003.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 06:53:54 PM CST
 ************************************************************************/

#include<stdio.h>

int sovle(int *arr, int n){
    int head = 0, tail = n, mid;
    while(head < tail){
        mid = head + (tail - head) / 2;
        if(arr[mid] & 1)head = mid + 1;
        else tail = mid;
    }
    return head == n ? -1 : head;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", sovle(arr, n));
    return 0;
}
