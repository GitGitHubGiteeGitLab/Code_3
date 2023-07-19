/*************************************************************************
	> File Name: dateLegality_120.c
	> Author: 
	> Mail: 
	> Created Time: Tue 20 Jun 2023 09:09:38 PM CST
 ************************************************************************/
#include <stdio.h>

int check_date(int y , int m , int d){
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(y <= 0 || m <= 0 || m > 12 || d <= 0 || d > 31)return 0;
    if((y % 4 == 0 && y % 100) || y % 400 == 0)month[2] += 1;
    return d <= month[m];
}

int main(){
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    printf("%s\n",  check_date(y, m, d) ? "YES" : "NO");
    return 0;
}

