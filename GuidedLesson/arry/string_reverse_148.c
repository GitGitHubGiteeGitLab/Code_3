/*************************************************************************
	> File Name: string_reverse_148.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 02:31:52 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 50
int str[MAX_N + 5] = {0};

int main(){
    int cnt = 0;
    for(int i = 0;;i++){
        str[i] = getchar();
        if(str[i] == 32 || str[i] == '\n')break;
        cnt++;
    }
    for(int j = cnt - 1; j >= 0 ; j--){
        printf("%c", str[j]);
    }
    printf("\n");
    return 0;
}
