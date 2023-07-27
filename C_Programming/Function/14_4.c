/*************************************************************************
	> File Name: 14_4.c
	> Author: 
	> Mail: 
	> Created Time: Thu 27 Jul 2023 08:59:03 PM CST
 ************************************************************************/

#include<stdio.h>


void f(){
    static int a = 0;
    a += 1;
    printf("a = %d\n", a);
}

int main(){
    for(int i = 0; i < 5; i++){
        f();
    }
    return 0;
}

