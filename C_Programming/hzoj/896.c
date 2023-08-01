/*************************************************************************
	> File Name: 896.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 11:26:34 PM CST
 ************************************************************************/

#include<stdio.h>

int check(int a, int b, int c){
    return a + b > c && a + c > b && b + c > a;
}

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%s\n", check(a, b, c) ? "YES" : "NO");
}
