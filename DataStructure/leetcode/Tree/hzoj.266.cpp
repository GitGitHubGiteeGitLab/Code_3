/*************************************************************************
	> File Name: hzoj.266.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Dec 2023 09:04:07 AM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
#include<cmath>
#include<queue>
using namespace std;
#define N 1000
//判断一个字符是否是运算符号+-*/ ^
//计算符号的权重，找到最小权重的符号
//左边，右边分别再次以同样方式处理

//判断一个字符是否是运算符号+-*/^
bool is_operator(char ch){
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}
#define INF 0X3f3f3f
//计算符号的权重，找到最小权重的符号, 左边，右边分别再次以同样的方式处理
long long calResult(char *str, int l, int r){
    long long pri = INF - 1, cur_pri = INF, temp_pri = 0;
    int index = -1;
    for(int i = l; i < r; i++){
        //计算符号的权重
        cur_pri = INF;//更新cur_pri
        switch(str[i]){
            case '(': temp_pri += 100;break;
            case ')': temp_pri -= 100;break;
            case '+': case '-':
                      cur_pri = 1 + temp_pri; break;
            case '*': case '/':
                      cur_pri = 2 + temp_pri; break;
            case '^': cur_pri = 3 + temp_pri; break;
        }
        //正负号判断
        if((str[i] == '-' || str[i] == '+')&&(i - 1 < 0 || is_operator(str[i-1]))){
            cur_pri += 1000;
        }
        if(pri >= cur_pri){
            pri = cur_pri;
            //记录权重最低的
            index = i;
        }
    }
    
    if(index == -1){
        long long num = 0;
        for(int i = l; i < r; i++){
            if(str[i] < '0' || str[i] > '9')continue;
            num = num * 10 + (str[i] - '0');
        }
        return num;
    }else{
        //分治
        //以权重最低的运算符为分界，左右先算
        long long a = calResult(str, l, index);
        long long b = calResult(str, index + 1, r);
        switch(str[index]){
            case '+': return a+b;
            case '-': return a-b;
            case '*': return a*b;
            case '/': return a/b;
            case '^': return pow(a, b);
        }
    }
    
    return 0;
}

int main(){
    char str[N + 5] = {0}; 
    scanf("%s", str);
    long long  result = calResult(str, 0, strlen(str));
    printf("result = %lld\n", result);
    return 0;
}
