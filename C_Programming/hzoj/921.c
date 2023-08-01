/*************************************************************************
	> File Name: 921.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 06:14:48 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define N 1000
#define swap(a, b){\
    __typeof(a) __temp = a;\
    a = b; b = __temp;\
}

void words_reverse(char (*words)[12], int k){
    for(int i = 0; i < k; i++){
        for(int left = 0, right = strlen(words[i]) - 1; left < right; left++, right--){
            swap(words[i][left], words[i][right]);
        }
    }
}

int main(){
    int k = 0;
    char words[N][12] = {0};
    while(~scanf("%s", words[k]))k++;
    words_reverse(words, k);
    for(int i = 0; i < k; i++){
        i && putchar(' ');
        printf("%s", words[i]);
    }
    printf("\n");
    return 0;
}
