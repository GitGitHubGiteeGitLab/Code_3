/*************************************************************************
	> File Name: test_11.c
	> Author: 
	> Mail: 
	> Created Time: Fri 23 Jun 2023 10:57:43 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 100


int is_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)return 0;
    }
    return 1;
}

void solve(int *arr){
    arr[0] = 0;
    for(int i = 2; i <= MAX_N; i++){
        if(!is_prime(i))continue;
       //arr[0]用于计数存入多少素数
        arr[0]++;
        arr[arr[0]] = i;
    }
    return;
}

int main(){
    int arr[MAX_N + 5] = {0};
    solve(arr);//hanshudiaoyong
    for(int i = 1; i <= arr[0]; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
