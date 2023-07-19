/*************************************************************************
	> File Name: parity_of_largeNumber_147.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 07:15:16 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 100000
char str[MAX_N]={0};

int main(){
    int i = 0;
     scanf("%s", str);
    int len =strlen(str);
    if(str[len-1] % 2 == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
