/*************************************************************************
	> File Name: 20_1.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2023 06:12:26 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool isValid(char * s){
    if(!s)return false;
    int len = strlen(s), head = -1;//栈顶指针head
    char tmp[10000] = {0};

    for(int i = 0; i < len; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            tmp[++head] = s[i];
        }else if(head == -1){//右括号没有匹配的左括号
            return false;
        }else if(tmp[head] == '(' && s[i] == ')'){
            head--;
            continue;
        }else if(tmp[head] == '{' && s[i] == '}'){
            head--;
            continue;
        }else if(tmp[head] == '[' && s[i] == ']'){
            head--;
            continue;
        }else{
            return false;
        }
    }
    //看栈中元素是否全部弹出，有剩余就说明有没能匹配的左括号
    if(head == -1){
        return true;
    }else {
        return false;
    }   
}
