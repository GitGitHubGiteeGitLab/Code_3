/*************************************************************************
	> File Name: 920.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 06:14:48 PM CST
 ************************************************************************/

#include<stdio.h>
#define N 1000

int main(){
    int k = 0;
    char words[N][12] = {0};
    while(~scanf("%s", words[k]))k++;
    for(int i = k- 1; ~i; i--){
        (i != k-1) && putchar(' ');
        printf("%s", words[i]);
    }
    printf("\n");
    return 0;
}
