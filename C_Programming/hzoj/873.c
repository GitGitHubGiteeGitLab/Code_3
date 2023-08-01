/*************************************************************************
	> File Name: 873.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 11:11:38 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char str[5][50] = {0};
    int n;
    scanf("%d", &n);
    getchar();//防把'\n'当第一行
    for(int i = 0; i < n; i++){
        fgets(str[i], 50, stdin);
    }
    for(int i = 0; i < n; i++){
        printf("%s", str[i]);
    }
    return 0;
}
