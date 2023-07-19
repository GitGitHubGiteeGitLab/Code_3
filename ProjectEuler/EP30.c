/*************************************************************************
	> File Name: EP30.c
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Jul 2023 11:02:28 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 354294

int is_val(int n){
    int x = n, sum = 0, tmp = 0;
    while(x){
        tmp = x % 10;
        sum += pow(tmp, 5);
        x /= 10;
    }
    return sum == n;
}

int main(){
    int sum = 0;
    for(int i = 10; i < MAX_N; i++){
        if(!is_val(i))continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
