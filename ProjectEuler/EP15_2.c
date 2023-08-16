/*************************************************************************
	> File Name: EP15_1.c
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Aug 2023 06:52:08 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    long long m = 40, n = 20, ans = 1;
    while(n > 1){
        if(m > 20)
            ans *= (m--);
        if(ans % n == 0){
            ans /= n;
            n--;
        }
    }
    printf("ans = %lld\n", ans);
    return 0;
}
