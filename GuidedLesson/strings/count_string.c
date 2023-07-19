/*************************************************************************
	> File Name: count_string.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 08:34:05 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 1000

int main(){
    char str[MAX_N + 5] = {0};
    scanf("%[^\n]s", str);
    int len = strlen(str), l_cnt = 0, n_cnt = 0, s_cnt = 0, e_cnt = 0;
    for(int i = 0; i < len; i++){
        if(('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')){
            l_cnt++;
        }else if('0' <= str[i] && str[i] <= '9'){
            n_cnt++;
        }else if(str[i] == ' '){
            s_cnt++;
        }else{
            e_cnt++;
        }
    }
    printf("%d %d %d %d\n", l_cnt, n_cnt, s_cnt, e_cnt);
    return 0;
}
