/*************************************************************************
	> File Name: 19.c
	> Author: 
	> Mail: 
	> Created Time: Tue 25 Jul 2023 09:16:27 AM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int arr[5];
    int *p1 = arr;
    int (*p2)[5] = &arr;
    printf("    p1 = %p\n", p1);
    printf("p1 + 1 = %p\n", p1 + 1);
    printf("    p2 = %p\n", p2);
    printf("p2 + 1 = %p\n", p2 + 1);
    return 0;
}

int main2(){
    int arr[2][100] ;
    printf("arr[0] = %p\n", arr[0]);
    printf("arr[1] = %p\n", arr[1]);
    printf("%ld", arr[1] - arr[0]);
    return 0;
}


int main1(){
    int arr[10];
    scanf("%d", arr + 2);
    printf("%d\n", arr[2]);
     return 0;
}
