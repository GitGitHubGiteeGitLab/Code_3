/*************************************************************************
	> File Name: 9.c
	> Author: 
	> Mail: 
	> Created Time: Wed 21 Jun 2023 04:44:13 PM CST
 ************************************************************************/
#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int main(){
     int a, b;
    while(~scanf("%d%d", &a, &b)){
        printf("%d + %d = %d\n", a, b, add(a,b));
    }
    return 0;
}

