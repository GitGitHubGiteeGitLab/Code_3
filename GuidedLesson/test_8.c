/*************************************************************************
	> File Name: test_8.c
	> Author: 
	> Mail: 
	> Created Time: Fri 23 Jun 2023 08:54:33 AM CST
 ************************************************************************/

#include<stdio.h>

void is_leapYear(int year){
    if((year % 4 == 0 && year % 100 ) || year % 400 == 0 ){
        printf("%d 是闰年！\n", year);
    } else{
    printf("%d 是平年！\n", year);
    }
    return;
}

int main(){
    int year;
    scanf("%d", &year);
    is_leapYear(year);
    return 0;
}
