/*************************************************************************
	> File Name: rock_paper_scissors_121.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Jun 2023 06:52:43 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char a, b;
    scanf("%c", &a);
    //%d%d会忽略中间空格，%c%c会吸收空格，空格也是一个符
    getchar();
    scanf("%c", &b);
    if(a == b){
        printf("TIE\n");
   }else if((a == 'O' && b == 'Y') || (a == 'Y' && b == 'H') || (a == 'H' && b == 'O')){
         printf("MING\n");
   }else{
         printf("LI\n");
   }
    return 0;
}
