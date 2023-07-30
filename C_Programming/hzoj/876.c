/*************************************************************************
	> File Name: 876.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 06:41:28 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define N 50
int main(){
    char s1[N] = {0}, s2[N] = {0};
    scanf("%s%s", s1, s2);
    sprintf(s1 + strlen(s1), "%s", s2);
    printf("%s\n", s1);
    return 0;
}
