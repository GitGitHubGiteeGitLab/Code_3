/*************************************************************************
	> File Name: swap_two_digits_95.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Jun 2023 12:11:31 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    //ret一定要清零
    int ret = 0;
    ret = n % 10 * 10;
    ret += n / 10;
    printf("%d\n", ret);
    return 0;
}
