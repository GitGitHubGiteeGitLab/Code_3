/*************************************************************************
	> File Name: sort_namelist_172.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 08:16:28 PM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>

int main(){
    char str[10][21] = {0};
    char tmp[21] = {0};
    for(int i = 0; i < 10; i++){
        scanf("%s", str[i]);
    }
    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(strcmp(str[i], str[j]) > 0){
                strcpy(tmp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tmp);
            }
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%s\n", str[i]);
    }
    return 0;
}
