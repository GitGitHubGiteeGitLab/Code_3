/*************************************************************************
	> File Name: parcel_consignment_110.c
	> Author: 
	> Mail: 
	> Created Time: Wed 28 Jun 2023 08:06:06 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    double X;
    scanf("%lf", &X);
    if(X <= 15){
        printf("%.2lf", 6 * X);
    }else{
        printf("%.2lf", 90 + 9 * (X - 15));
    }
    return 0;
}
