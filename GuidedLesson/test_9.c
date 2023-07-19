/*************************************************************************
	> File Name: test_9.c
	> Author: 
	> Mail: 
	> Created Time: Fri 23 Jun 2023 09:07:08 AM CST
 ************************************************************************/

#include<stdio.h>

void reverse(int num){
    int ret = 0;
    while(num){
        ret = ret * 10 + num % 10;
        num /= 10;
    }
    printf("%d\n", ret);
    return ;
}

int main(){
    int num;
    scanf("%d", &num);
    reverse(num);
    return 0;
}
