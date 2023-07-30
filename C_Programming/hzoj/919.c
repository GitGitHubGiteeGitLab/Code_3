/*************************************************************************
	> File Name: 919.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 07:04:39 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define N 55

int main(){
    char str[N] = {0};
    scanf("%s", str);
    int len = strlen(str), flag = 0;
    for(int left = 0, right = len - 1; left < right; left++, right--){
        if(str[left] == str[right])continue;
        printf("NO\n");
        flag = 1;
        break;
    }
    if(!flag)printf("YES\n");
    return 0;
}
