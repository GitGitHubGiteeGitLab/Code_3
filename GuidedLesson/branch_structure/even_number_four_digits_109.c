/*************************************************************************
	> File Name: even_number_four_digits_109.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Jun 2023 07:53:55 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n / 1000 % 2 == 0 || n / 100 % 2 == 0 || n / 10 % 2 == 0 || n % 2 == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
