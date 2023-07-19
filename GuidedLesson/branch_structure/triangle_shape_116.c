/*************************************************************************
	> File Name: triangle_shape_116.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Jun 2023 02:19:07 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){                     
    int a, b, c;                
    scanf("%d%d%d", &a, &b, &c);
    if (a > b){
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }else if (b > c){
        b = b ^ c;
        c = b ^ c;
        b = c ^ b;
    }
    if(b > c){
        b = b ^ c;
        c = b ^ c;
        b = c ^ b;        
    }
    if(a + b <= c){
        printf("illegal triangle\n");
        return 0;
    }
    if(a * a + b * b == c * c){
        printf("right triangle\n");
    }else if(a * a + b * b > c * c){
        printf("acute triangle\n");
    }else{
        printf("obtuse triangle\n");
    }
    return 0;
} 
