/*************************************************************************
	> File Name: EP28.c
	> Author: 
	> Mail: 
	> Created Time: Wed 09 Aug 2023 10:19:28 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int sum = 1;
    for(int i = 3; i <= 1001; i += 2){
        sum += i * i * 4 - i * 6 + 6;
    }
    printf("%d\n", sum);
}
