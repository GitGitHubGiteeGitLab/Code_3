/*************************************************************************
	> File Name: 25.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 07:31:54 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX(a, b)({\
    __typeof(a) _a = a;\
    __typeof(b) _b = b;\
    (_a) > (_b) ? (_a) : (_b);\
})
int main(){
    printf("MAX(2, 3) = %d\n", MAX(2, 3));
    printf("5 + MAX(2, 3) = %d\n", 5 + MAX(2, 3));
    printf("MAX(2, MAX(3, 4)) = %d\n", MAX(2, MAX(3, 4)));
    printf("MAX(2, 3>4 ? 3 : 4) = %d\n", MAX(2, 3>4 ? 3 : 4));
    int a = 7;
    printf("MAX(a++, 6) = %d\n", MAX(a++, 6));
    printf("a = %d\n", a);
    return 0;
}
