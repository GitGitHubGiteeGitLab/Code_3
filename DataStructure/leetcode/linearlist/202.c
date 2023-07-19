/*************************************************************************
	> File Name: 202.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 11:43:34 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>

int digitSquareSum(int n){
    int sum = 0, tmp;
    while(n){
        tmp = n % 10;
        sum += tmp * tmp;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n){
    int fast = n, slow = n, i = 0;
    while(1){
        slow = digitSquareSum(slow);
        fast = digitSquareSum(fast);
        //每次让fast多跑一点，拉开距离，不然就变成固定距离。
        fast = digitSquareSum(fast);
        if(fast == 1)return true;
        if(fast == slow)return false;
    }
}

int main(){
    int n = 0;
    printf("intput:");
    scanf("%d", &n);
    int ret = isHappy(n);
    if (ret) {
        printf("isHappy\n");
    }else {
        printf("notHappy\n");
    }
    return 0;
}
