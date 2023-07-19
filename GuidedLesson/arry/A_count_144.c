/*************************************************************************
	> File Name: A_count_144.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 12:25:22 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 100

int main(){
    char strings[MAX_N + 5] = {0};
    scanf("%s", strings);
    int cnt = 0;
    for(int i = 0; strings[i] != 0; i++){
        if(strings[i] == 'A')cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
