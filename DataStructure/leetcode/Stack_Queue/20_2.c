/*************************************************************************
	> File Name: 20_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 11:11:41 AM CST
 ************************************************************************/

#include<stdio.h>
#include <stdbool.h>
#include <string.h>
//括号是字符，字符也是数字
bool isValid(char * s){
    if(!s)return false;
    int len = strlen(s), head = -1;//栈顶指针head
    char tmp[10000] = {0};
    for(int i = 0; i < len; i++){
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
    }
    if(head == -1){
        return true;
    }else{
        return false;
    }
}
