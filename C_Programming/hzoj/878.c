/*************************************************************************
	> File Name: 878.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 10:26:04 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int y, m, d, h, min, s;
    char str[50] = {0};
    scanf("%d %d %d %d %d %d", &y, &m, &d, &h, &min, &s);
    sprintf(str,"%04d-%02d-%02d %02d:%02d:%02d", y, m, d, h, min, s);
    printf("%s\n", str);
    return 0;
}
