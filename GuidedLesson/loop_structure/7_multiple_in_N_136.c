/*************************************************************************
	> File Name: 7_multiple_in_N_136.c
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Jun 2023 02:33:16 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 7 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
