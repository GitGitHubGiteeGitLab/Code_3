/*************************************************************************
	> File Name: 11_multiple_134.c
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Jun 2023 02:25:21 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int flag = 0;
    for(int i = a; i <= b; i++){
        if(i % 11 == 0){
            if(flag){
                printf(" ");
            }
            printf("%d", i);
            flag = 1;
        }
    }
    printf("\n");
    return 0;
}
