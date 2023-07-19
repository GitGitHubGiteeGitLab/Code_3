/*************************************************************************
	> File Name: EP02.c
	> Author: 
	> Mail: 
	> Created Time: Thu 06 Jul 2023 09:21:17 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 4000000
//递归实现第i位的斐波那契数
/*
int Fibonacci(int n){
    if(n ==1)return 1;
    if(n == 2)return 2;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}


int main(){
    //累加计数计数器
    //long long防止数据溢出
    //long long比int运算慢，因为要处理的位数多
    long long sum = 2, fibo_num = 2;
    int n = 2;
    for(int i = 3; Fibonacci(i) <= MAX_N; i++){
       // if(Fibonacci(i) % 2 == 0){
        //    sum += Fibonacci(i);
          //  printf("%d\n", sum);
       // }

        //&运算实现
        n++;
        fibo_num = Fibonacci(i); 
        if(fibo_num & 1)continue;
        sum += fibo_num;
    }
    printf("%lld\n%d\n", sum, n);
    return 0;
}
*/


//滚动数组（循环数组）：fib仅需要三位整型的空间(递推表达式)
/*
int main(){
    int fib[3] = {0};
    fib[1] = 1, fib[2] = 2;
    int n = 2, sum = 2;
    
    while(fib[n % 3] + fib[(n - 1) % 3] <= MAX_N){
        n++;
        fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
        if(fib[n % 3] & 1)continue;
        sum += fib[n % 3];
    }
    
    printf("%d\n", sum);
    return 0;
}
*/

//三个变量解决
/*
int main(){
    int a = 1, b = 2, c, sum = 2;
    while(a + b <= MAX_N){
        c = a + b;
        //更新a, b
        a = b;
        b = c;

        if(c & 1)continue;
        sum += c;
    }
    printf("%d\n", sum);
    return 0;
}
*/

//两个变量解决
int main(){
    int a = 1, b = 2, sum =2;
    while(a + b <= MAX_N){
        b += a;
        a = b - a;
        if(b & 1)continue;
        sum += b;
    }
    printf("%d\n", sum);
    return 0;
}
