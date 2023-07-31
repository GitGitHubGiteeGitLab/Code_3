/*************************************************************************
	> File Name: 28.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 07:27:35 AM CST
 ************************************************************************/

#include<stdio.h>

union IP{
    struct {
        unsigned char a1;
        unsigned char a2;
        unsigned char a3;
        unsigned char a4;
    }bytes;
    unsigned int num;
};

int main(){
    union IP p;
    char str[30] = {0};
    int arr[4];
    while(~scanf("%s", str)){
        getchar();//无必要
        sscanf(str, "%d.%d.%d.%d", &arr[0], &arr[1], &arr[2], &arr[3]);
        p.bytes.a1 = arr[3];
        p.bytes.a2 = arr[2];
        p.bytes.a3 = arr[1];
        p.bytes.a4 = arr[0];
        printf("%s->%u\n", str, p.num);
    }
    return 0;
}
