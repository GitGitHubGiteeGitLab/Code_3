/*************************************************************************
	> File Name: 926.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 05:31:59 PM CST
 ************************************************************************/

#include<stdio.h>

int is_num(char ch){
    if('0' <= ch && ch <= '9')return 1;
    return 0;
}

int is_alp(char ch){
    if('a' <= ch && ch <= 'z')return 1;
    if('A' <= ch && ch <= 'Z')return 1;
    return 0;
}

int check(const char *str){
    if('0' <= *str && *str <= '9')return 0;
    for(int i = 0; str[i]; i++){
        if(is_num(str[i]) || is_alp(str[i]) || str[i] == '_')continue;
        return 0;
    }
    return 1;
}

int main(){
    char str[25] = {0};
    scanf("%s", str);
    printf("%s\n", check(str) ? "YES" : "NO");    
}
