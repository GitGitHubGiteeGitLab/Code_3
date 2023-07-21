/*************************************************************************
	> File Name: 20_thought.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 12:03:03 PM CST
 ************************************************************************/

#include<stdio.h>
#include <stdbool.h>
#include <string.h>
//只有'(' 或 ')'
bool isValid(char * s){
    if(!s)return false;
    int i = 0, num1 = 0;
    while(s[i]){
        switch(s[i]){
            case '(': num1++;break; 
            case ')': num1--;break;
        }
        i++;
        if(num1 < 0) return false;   
    }
    if(num1)return false;
    else return true;
}
