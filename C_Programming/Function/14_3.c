/*************************************************************************
	> File Name: 14_3.c
	> Author: 
	> Mail: 
	> Created Time: Thu 27 Jul 2023 08:52:32 PM CST
 ************************************************************************/

#include<stdio.h>

void f(){
    int a = 0;
    a += 1;
    printf("a = %d\n", a);
}

int main(){
    for(int i = 0; i < 5; i++){
        f();
    }
    return 0;
}
