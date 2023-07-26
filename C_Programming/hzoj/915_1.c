/*************************************************************************
	> File Name: 915.c
	> Author: 
	> Mail: 
	> Created Time: Wed 26 Jul 2023 10:49:23 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n, flag = 0;
    scanf("%d", &n);
    for(int i = 31; ~i; i--){
        int bit = (n >> i) & 1;
       if(bit) flag = 1;
       if(flag) printf("%d", bit);
    }
    printf("\n");
    return 0;
}
