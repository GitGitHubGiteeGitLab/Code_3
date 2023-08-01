/*************************************************************************
	> File Name: 30_1.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Aug 2023 07:44:14 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void func(){
    printf("%s\n", "hehe");
}

void error_print(){
    printf("You are not the user");
}

int main(int argc, char *argv[], char *env[]){
    for(int i = 0; env[i] != NULL; i++){
        if(strncmp(env[i], "USER=", 5))continue;
        if(strcmp(env[i] + 5, "captainCpp") == 0)break;
        else {
            error_print();
            exit(0);
        }
    }
    func();
    return 0;
}
