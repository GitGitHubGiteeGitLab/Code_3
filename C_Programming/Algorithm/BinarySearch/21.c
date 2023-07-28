/*************************************************************************
	> File Name: 21.c
	> Author: 
	> Mail: 
	> Created Time: Fri 28 Jul 2023 11:30:39 AM CST
 ************************************************************************/

#include<stdio.h>

int binary_search(int *arr, int n, int val ){
    int head = 0, tail = n - 1, mid;
    while(head <= tail){
        mid = head + ((tail - head) >> 1);
        if(arr[mid] < val){
            head = mid + 1;    
        }else if(arr[mid] > val){
            tail = mid - 1;
        }else {
           return mid;  
        }
    }
    return -1; 
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int x;
    while(~scanf("%d", &x)){
        printf("search [%d], result: [%d]\n", x,binary_search(arr, n, x));
    }
    return 0;
}
