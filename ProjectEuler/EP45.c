/*************************************************************************
	> File Name: 11.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2023 10:29:38 AM CST
 ************************************************************************/

#include<stdio.h>
//不用long long会溢出

long long Triangle(long long n){
    return n * (n + 1) / 2;
}

long long Pentagonal(long long n){
    return n * (3 * n - 1) / 2;
}

long long Hexagonal(long long n){
    return n * (2 * n - 1);
}

int binary_search(long long (*f)(long long), int val, long long n){
    long long head = 1, tail = n, mid = 0;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(f(mid) == val) return 1;
        if(f(mid) < val)head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main(){
    long long n = 285, flag = 1;
    while(flag){
        n++;
        long long  ret = Triangle(n);
        if(!binary_search(Pentagonal, ret, n))continue;
        if(!binary_search(Hexagonal, ret, n))continue;
        printf("%lld\n", ret);
        flag = 0;
    }
    return 0;
}
