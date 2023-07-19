/*************************************************************************
	> File Name: 9_in_number_104.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Jun 2023 07:43:22 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n % 10 == 9 || n / 10 % 10 == 9 || n / 100 == 9){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
