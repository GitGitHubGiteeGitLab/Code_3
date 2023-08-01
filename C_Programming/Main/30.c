/*************************************************************************
	> File Name: 30.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 07:06:18 AM CST
 ************************************************************************/

#include<stdio.h>

int main(int argc, char* argv[], char** env){
    for(int i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }
    for(int i = 0; env[i] != NULL; i++){
        printf("env[%d] = %s\n", i, env[i]);
    }
    return 0; 
}
