/*************************************************************************
	> File Name: symmetrical_string_178.c
	> Author: 
	> Mail: 
	> Created Time: Sun 02 Jul 2023 12:22:59 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N  5000000
//会自动在后面添加'\0'
char str[MAX_N] = {'A'};

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i < n; i++){
        int len = strlen(str);
        //利用i实现i + 1, 利用n - 1实现n
        //规律数组下标为2 * len - i 的和数组下标为i的存储的字符相同
        for(int j = 0; j < len; j++){
            str[2 * len - j] = str[j];
        }
        //0 ~ 2 * len , len在中间
        str[len] = 'A' + i;
    }
    printf("%s\n", str);
    return 0;
}
