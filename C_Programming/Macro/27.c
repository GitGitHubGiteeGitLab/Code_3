/*************************************************************************
	> File Name: 27.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 09:57:31 PM CST
 ************************************************************************/

#include<stdio.h>


__attribute__((constructor))
void test(){
    printf("this is test!\n");
    printf("1 + 2 = %d\n", 1 + 2);
}

int main(){
    printf("this is main!\n");
    return 0;
}
