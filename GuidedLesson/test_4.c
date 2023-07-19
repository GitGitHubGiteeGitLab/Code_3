/*************************************************************************
	> File Name: test_4.c
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Jun 2023 09:35:08 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
   while(1){
    if(n < 0 || n > 100){
        printf("Wrong Input!\n请重新输入\n");
        scanf("%d", &n);
        continue;
    }
     break;  
   }   
    if(n == 0){
        printf("FOOLISH\n");
    }else if(n < 60){
        printf("FAIL\n");
    }else if(n < 75){
        printf("MEDIUM\n");
    }else{
        printf("GOOD\n");
    }
    return 0;
}
