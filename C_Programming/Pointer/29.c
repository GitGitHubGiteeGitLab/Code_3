/*************************************************************************
	> File Name: 29.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 04:58:46 PM CST
 ************************************************************************/

#include<stdio.h>

#define P(func){\
    printf("%s = %d\n", #func, func);\
}//#:转字符串

struct Data{
    int x, y;
};


int main(){
    struct Data a[2], *p = a;
    a[0].x = 0, a[0].y = 1;
    a[1].x = 2, a[1].y = 3;
    P(a[1].x);
    P((&a[1])->x);
    P((a + 1)->x);
    P((*(a + 1)).x);
    P((&a[0]+1)->x);
    P((*(&a[0] + 1)).x);
    P(((&a[0] + 1)[0]).x);
    P((&(&a[0] + 1)[0])->x);
    return 0;
}
