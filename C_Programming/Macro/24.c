/*************************************************************************
	> File Name: 23.c
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Jul 2023 12:13:39 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    printf("%s %s\n", __DATE__, __TIME__);
    printf("%s %s %d\n", __FILE__, __func__, __LINE__);
    return 0;
}
