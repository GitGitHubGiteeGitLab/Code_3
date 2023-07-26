/*************************************************************************
	> File Name: 21.c
	> Author: 
	> Mail: 
	> Created Time: Wed 26 Jul 2023 10:03:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(){
    int arr[5] = {1, 2, 3, 4};
    for(int i = 0; i < 4; i++){
        i && putchar(32);
        printf("%d", arr[i]);
    }
    printf("\n");
    memset(arr, 0, sizeof(arr));
    for(int i = 0; i < 4; i++){
        i && putchar(32);
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
