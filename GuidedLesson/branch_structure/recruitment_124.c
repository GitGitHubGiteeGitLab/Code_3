/*************************************************************************
	> File Name: recruitment_124.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Jun 2023 07:29:01 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    int academy, rank, age, work_y;
    scanf("%d%d%d%d", &academy, &rank, &age, &work_y);
    if((academy != 0 || rank <= 50) && (age <= 25 || work_y >= 5)){
        printf("ok\n");
    }else{
        printf("pass");
    }
    return 0;
}
