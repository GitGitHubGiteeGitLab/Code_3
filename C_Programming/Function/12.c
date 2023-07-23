/*************************************************************************
	> File Name: 12.c
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Jul 2023 12:31:54 PM CST
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<stdarg.h>
int max_int(int n, ...){
    int ans = INT32_MIN;
    va_list arg;
    va_start(arg, n);
    while(n--){
        int tmp = va_arg(arg, int);
        if(tmp > ans)ans = tmp;
    }
    va_end(arg);
    return ans;
}

int main(){
    printf("%d\n", max_int(4,1,3,5,23));
    printf("%d\n", max_int(3, 78, 65, 90));
    printf("%d\n", max_int(5, 34, 54, 65, 324, 34));
    return 0;
}
