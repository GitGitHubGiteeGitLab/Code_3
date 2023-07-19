/*************************************************************************
	> File Name: EP34.c
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Jul 2023 10:49:42 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 2903040 

void init(int *num){
    num[0] = 1;
    for(int i = 1; i < 10; i++){
        num[i] = i * num[i - 1];
    }
    return;
}

int is_value(int *num, int n){
    int x = n, tmp = 0;
    while(x){
        tmp += num[x % 10];
        x /= 10;
    }
    return tmp == n;
}

int main(){
    int sum = 0, num[10] = {0};
    init(num);
    for(int i = 10; i < MAX_N; i++){
        if(!is_value(num,i))continue;
        sum != 0 && printf(" ");
        sum += i;
        printf("%d", i);
    }
    printf("\n");
    printf("%d\n", sum);
    return 0;
}
