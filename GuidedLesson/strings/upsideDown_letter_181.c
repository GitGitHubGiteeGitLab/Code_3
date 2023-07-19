/*************************************************************************
	> File Name: upsideDown_letter_181.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 08:26:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N  100000

int main(){
    char str[MAX_N] = {0};
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if('a' <= str[i] && str[i] <= 'z'){
            str[i] -= 32;
        }else{
            str[i] += 32;
        }
    }
    printf("%s\n", str);
    return 0;
}
