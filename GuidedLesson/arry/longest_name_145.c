/*************************************************************************
	> File Name: longest_name_145.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 01:59:56 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char str[20][100]={0};

int main(){
    int N, l_max = 0, l, flag = 0, cnt = 0;
    scanf("%d", &N);
    //利用二维数组循环读入
    for(int i = 0; i < N; i++){
        scanf("%s", str[i]);
       //不需要的原因：‘\0’的ASCII码值是0
        // for(int j = 0; str[i][j] != 0; j++){
        //    cnt++;
       // }
        //记得要在
        // str[i][cnt] = '\0';
    }
    for(int i = 0; i < N; i++){
      l = strlen(str[i]);
        if(l > l_max){
            l_max = l;
            flag = i;
        }
    }
    printf("%s\n", str[flag]);
    return 0;
}
