/*************************************************************************
	> File Name: 906.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 11:31:10 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
