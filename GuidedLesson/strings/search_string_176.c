/*************************************************************************
	> File Name: search_string_176.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 10:00:55 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 1005

int main(){
    char str1[MAX_N] = {0};
    char str2[MAX_N] = {0};
    //通过在scanf格式控制符%[^\n]之前添加一个空格，可以消耗掉换行符，确保第二个字符串能够正确被输入。
    scanf("%[^\n]", str1);
    scanf(" %[^\n]", str2);
    int len1 = strlen(str1), len2 = strlen(str2), cnt = 0;
    for(int i = 0; i <= len1 - len2; i++){
        //妙手
        if(strncmp(&str1[i], str2, len2) == 0)cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
