/*************************************************************************
	> File Name: test_10.c
	> Author: 
	> Mail: 
	> Created Time: Fri 23 Jun 2023 09:45:41 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int is_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)return 0;
    }
    return 1;
}

int main(){
    for(int i = 2; i <= 100; i++){
        is_prime(i) && printf("%d\n", i);
    }
    return 0;
}
