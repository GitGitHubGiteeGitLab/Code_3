/*************************************************************************
	> File Name: 7.c
	> Author: 
	> Mail: 
	> Created Time: Mon 19 Jun 2023 08:46:42 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a , b;
    while(~scanf("%d%d" , &a , &b)){//EOF的值是-1，对1按位取反为0，因为1的二进制表示是32个1
       // int tmp = a;
       // a = b;
       // b = tmp;
       //use ^ to achieve
       a ^= b;
       b = a ^ b;
       a = a ^ b;
        printf("swap: a = %d, b = %d" , a , b);
    }
    return 0;
}
