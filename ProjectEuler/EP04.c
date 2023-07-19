/*************************************************************************
	> File Name: EP04.c
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Jul 2023 09:20:28 AM CST
 ************************************************************************/

#include<stdio.h>

int is_reverse(int n){
    int x = n, sum = 0;
    //对x进行翻转,对sum扩大10倍且每次只要x的个位数，对x每次去掉它最后一位
    while(x){
        sum = sum * 10 + x % 10;
        x /= 10;
    }
    return sum == n;
}   
/**
int main(){
    int ans = 0;
    for(int a = 100; a < 1000; a++){
        for(int b = 100; b < 1000; b++){
            if(is_reverse(a * b) && a * b > ans){
                ans = a * b;
            }
        }
    }
    printf("%d", ans);
    return 0;
}
**/
/*
int main(){
    int ans = 0;
    for(int a = 100; a < 1000; a++){
        //向上枚举, 避免重复枚举， 101 * 113 ， 113 * 101；
        for(int b = a; b < 1000; b++){
            //找相反条件，减少缩进
            if(!is_reverse(a * b) || a * b <= ans)continue;
            ans = a * b;
            printf("%d * %d = %d\n", a, b, ans);
        }
    }
    printf("%d\n", ans);
    return 0;
}
*/

int main(){
    int ans = 0;
    for(int a = 100; a < 1000; a++){
        //减少了不必要的判断
        for(int b = (ans / a >= 100 ? ans / a + 1 : a); b < 1000; b++){
            if(!is_reverse(a * b)) continue;
            ans = a * b;
            printf("%d * %d = %d\n", a, b, ans);
        }
    }
    printf("%d", ans);
    return 0;
}
