/*************************************************************************
	> File Name: odd_multiple_of_seven_107.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Jun 2023 07:40:55 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n % 7 == 0 && n % 2){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
