/*************************************************************************
	> File Name: test_5_2.c
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Jun 2023 10:06:41 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    switch(n){
        case 1:
        printf("one ");
        case 2:
        printf("two ");
        case 3:
        printf("three\n");
        break;
        default:
        printf("error\n");
        break;
    }
    return 0;
}
