/*************************************************************************
	> File Name: number_game_143.c
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Jun 2023 07:14:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int is_prime(int n){
    for(int i = 2; i <= sqrt(n) ; i++){
        if(n % i == 0)return 0;
    }
    return 1;
}

int is_perfect_square_number(int n){
    //赋值类型转换
    int square = sqrt(n);
    return square * square == n;
}

int main(){
    int a, b, cnt = 0, flag = 0;
    scanf("%d%d", &a, &b); 
    for(int i = a; i <= b; i++){
        if(i % 6 == 0 && is_prime(i / 100) && is_perfect_square_number(i % 100)){
            if(flag)printf(" ");
            printf("%d", i);
            flag = 1;
            cnt++;
        } 
    }
    printf("\n%d\n", cnt);
    return 0;
}
