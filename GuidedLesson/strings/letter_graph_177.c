/*************************************************************************
	> File Name: letter_graph_177.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 09:44:59 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(){
    char str[30] = {0};
    scanf("%s", str);
    int len = strlen(str);
    int a = 0;
    //无论如何总共输出len行
    //每行输出len个字母
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            printf("%c", str[a]);
            a++;
            a %= len;
        }
        printf("\n");
        a += len - 2;
        a %= len;
    }
    return 0;
}
