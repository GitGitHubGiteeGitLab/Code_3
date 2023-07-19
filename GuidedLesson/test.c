/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Jun 2023 06:27:16 PM CST
 ************************************************************************/


#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    printf("char : %zu\n", sizeof(char));
    printf("short : %zu\n", sizeof(short));
    printf("int : %zu\n", sizeof(int));
    printf("long : %zu\n", sizeof(long));
    printf("long long : %zu\n", sizeof(long long));
    printf("float : %zu\n", sizeof(float));
    printf("double : %zu\n", sizeof(double));
    return 0;
}
