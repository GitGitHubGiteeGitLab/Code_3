/*************************************************************************
	> File Name: 897.c
	> Author: 
	> Mail: 
	> Created Time: Wed 26 Jul 2023 10:29:00 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int i;
    for(i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            printf("NO\n");
            break;
        }
    }
    if(i == n - 1)printf("YES\n");
    return 0;
}
