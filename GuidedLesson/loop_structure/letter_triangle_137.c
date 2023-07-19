/*************************************************************************
	> File Name: letter_triangle_137.c
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Jun 2023 07:06:09 PM CST
 ************************************************************************/

#include<stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    char ch = 'A';
    //一共输出n行
    for(int i = 1; i <= n; i++){
    //第i行输出n-i+1个字母
        for(int j = i; j <= n; j++){
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
