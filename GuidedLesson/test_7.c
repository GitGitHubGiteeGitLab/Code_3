/*************************************************************************
	> File Name: test_7.c
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Jun 2023 10:31:18 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    for(int i =1; i <= 100 ; i++){
         if(i & 1)continue;
         printf("%d\n", i);
    } 
    return 0;
}
