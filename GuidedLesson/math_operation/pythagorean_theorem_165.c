/*************************************************************************
	> File Name: pythagorean_theorem_165.c
	> Author: 
	> Mail: 
	> Created Time: Tue 27 Jun 2023 08:07:49 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main(){
    long long c;
    //ans is answer, 计数器清空前一定要清空
    int ans = 0;
    scanf("%lld", &c);
    for(long long a = 1; a < c; a++){
        //赋值转换： 将实型数据(包括单、双精度)赋给整型变量时，舍弃实数的小数部分
        long long b = sqrt(c * c - a * a);
        if(a * a + b * b == c *c){
            ans++;
        }
    }
    //ans 取一半，3 4 和4 3 相同的
    printf("%d\n", ans / 2);
    return 0;
}
