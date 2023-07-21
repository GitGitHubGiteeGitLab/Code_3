/*************************************************************************
	> File Name: 20_3.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 11:16:30 AM CST
 ************************************************************************/

#include<stdio.h>
#include <stdbool.h>
#include <string.h>
//括号是字符，字符也是数字
bool isValid(char * s){
    if(!s)return false;
    int head = -1, i = 0;//栈顶指针head
    char tmp[10000] = {0};
    while(s[i]){
        switch(s[i]){
            case '(':
            case '[':
            case '{':
                     tmp[++head] = s[i];
                     break;
            case ')': 
                     if(~head && tmp[head] == '(')head--;
                     else return false;
                     break;
            case ']':   
                     if(~head && tmp[head] == '[')head--;
                     else return false;
                     break;
            case '}':   
                     if(~head &&tmp[head] == '{')head--; 
                     else return false;
                     break;         
        }
        i++;    
    }
    if(head == -1){
        return true;
    }else{
        return false;
    }
}


