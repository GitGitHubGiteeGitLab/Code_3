/*************************************************************************
	> File Name: 877.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 09:38:11 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define N 30

void solve(char *str){
    int a, b, c;
    char temp[N] = {0};
    sscanf(str, "%d is %s", &a, temp);
    if(strncmp(temp, "greater", 7) == 0){
        sscanf(str, "%d is greater than %d", &a, &b);
        printf("%s\n", a > b ? "Yes" : "No");
    }else if(strncmp(temp, "equal", 5) == 0){
        sscanf(str, "%d is equal to %d plus %d", &a, &b, &c);
        printf("%s\n", a == b + c ? "Yes" : "No");
    }else{
        printf("???\n");
    }
}

int main(){
    char str[N] = {0};
    scanf("%[^\n]s", str);
    solve(str);
    return 0;
}
