/*************************************************************************
	> File Name: replace_string_174.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 09:02:45 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 1000000

int main(){
    char str1[MAX_N + 5] = {0};
    char str2[3 * MAX_N + 5] = {0};
    scanf("%[^\n]s", str1);
    long long len = strlen(str1);
    for(int i = 0, j = 0; i < len; i++){
        if(str1[i] == ' '){
            str2[j] = '%';
            str2[j + 1] = '2';
            str2[j + 2] = '0';
            j += 3;
        }else {
            str2[j] = str1[i];
            j += 1;
        }
    }
    printf("%s\n", str2);
    return 0;
}
