/*************************************************************************
	> File Name: 26.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 09:46:14 PM CST
 ************************************************************************/

#include<stdio.h>

#ifdef DEBUG
#define LOG(format, arg...){\
    printf("[%s : %s : %d] %s = ", __FILE__, __func__, __LINE__, #arg);\
    printf(format, ##arg);\
    printf("\n");\
}
#else
#define LOG(format, arg...)
#endif


int main(){
    int a = 3;
    LOG("%d", a);
    LOG("hello haizei!");
    return 0;
}
