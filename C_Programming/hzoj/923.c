/*************************************************************************
	> File Name: 923.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 11:53:10 PM CST
 ************************************************************************/

#include<stdio.h>
#define N 1000
int main(){
    char str[N][N] = {0};
    int k = 0;
    while(~scanf("%s", str[k]))k++;
    for(int i = 0; i < k; i++){
        str[i][0] -= 32;
        i && putchar(' ');
        printf("%s", str[i]);
    }
    printf("\n");
    return 0;
}
