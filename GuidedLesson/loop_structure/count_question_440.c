/*************************************************************************
	> File Name: count_question_440.c
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Jun 2023 07:53:35 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int n, x;
    long long cnt = 0;
    scanf("%d%d", &n, &x);
     for(int i = 1; i <= n; i++){
         if(i % 10 == x)cnt++;
         if(i / 10 != 0 && i % 100 / 10 == x)cnt++;
         if(i / 100 != 0 && i % 1000 / 100 == x)cnt++;
         if(i / 1000 != 0 && i % 10000 / 1000 == x)cnt++;
         if(i / 10000 != 0 && i % 100000 / 10000 == x)cnt++;
         if(i / 100000 != 0 && i % 1000000 / 100000 == x)cnt++;
    }   
    
    if(x == 1 && n == 1000000)cnt++;
    printf("%lld\n", cnt);
    return 0;
}
