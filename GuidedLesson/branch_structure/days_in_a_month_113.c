/*************************************************************************
	> File Name: days_in_a_month_113.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Jun 2023 12:48:20 PM CST
 ************************************************************************/

#include<stdio.h>
int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    int y, m;
    scanf("%d%d", &y, &m);
    if(m != 2){
        printf("%d\n", arr[m]);
    }else if((y % 4 == 0 && y % 100) || y % 400 == 0){
        printf("%d\n", arr[2] + 1);
    }else{
        printf("%d\n", arr[2]);
    }
    return 0;
}
