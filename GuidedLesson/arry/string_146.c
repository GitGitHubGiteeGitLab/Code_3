/*************************************************************************
	> File Name: string_146.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 02:17:56 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N  50
char str[MAX_N + 5] = {0};

int main(){
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if(str[i] == 'z')str[i] = 'a';
        else if(str[i] == 'Z')str[i] = 'A';
        else if(('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z'))str[i]++;
    }
    printf("%s\n", str);
    return 0;
}
